// Given an unsorted array arr of positive integers. One number a from the set [1, 2,....,n] is missing and one number b occurs twice in the array. Find numbers a and b.
// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

#include <bits/Stdc++.h>
using namespace std;

// -----
vector<int> findTwoElement(vector<int> &arr)
{
    long long n = arr.size();

    long long sum_expected = n * (n + 1) / 2;
    long long sum_sq_expected = n * (n + 1) * (2 * n + 1) / 6;

    long long sum_actual = 0, sum_sq_actual = 0;

    for (int i = 0; i < n; i++)
    {
        sum_actual += arr[i];
        sum_sq_actual += (long long)arr[i] * arr[i];
    }

    // Calculate the differences
    long long sum_diff = sum_expected - sum_actual;          // x - y
    long long sum_sq_diff = sum_sq_expected - sum_sq_actual; // x^2 - y^2

    // Now use the equations to find x and y
    long long x_plus_y = sum_sq_diff / sum_diff; // x + y

    // Solving for x and y
    long long x = (sum_diff + x_plus_y) / 2;
    long long y = x - sum_diff;

    return {(int)y, (int)x};
}

// -----

int main()
{
    vector<int> arr = {6, 5, 8, 7, 1, 4, 1, 3, 2};
    vector<int> result = findTwoElement(arr);
    cout << "Repeating number: " << result[0] << ", Missing number: " << result[1] << endl;
    return 0;
}