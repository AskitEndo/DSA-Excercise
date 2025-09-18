// return true if there exists a pair of elements in the array whose absolute difference is x
// https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1

#include <bits/Stdc++.h>
using namespace std;

bool findPair(vector<int> &arr, int x)
{
    sort(arr.begin(), arr.end());

    int n = arr.size(); // Get size of array
    int i = 0, j = 1;

    while (i < n && j < n)
    {
        int diff = arr[j] - arr[i];

        if (diff == x && i != j)
        {
            return true;
        }
        else if (diff < x)
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    return false;
}

int main()
{
    vector<int> arr = {5, 20, 3, 2, 50, 80};
    int x = 78;
    cout << findPair(arr, x) << endl;
    return 0;
}