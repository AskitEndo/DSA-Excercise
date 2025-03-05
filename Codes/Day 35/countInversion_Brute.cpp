// Given an array of integers arr[]. Find the Inversion Count in the array.
// https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

#include <bits/Stdc++.h>
using namespace std;

// -----

int inversionCount(vector<int> &arr)
{
    int cnt = 0;
    int n = arr.size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}

// -----

int main()
{

    vector<int> arr = {2, 4, 1, 3, 5};
    cout << "Inversion Count: " << inversionCount(arr) << endl;
    return 0;
}