// Return the largest number of chunks we can make to sort the array.
// https://leetcode.com/problems/max-chunks-to-make-sorted-ii/

#include <bits/Stdc++.h>
using namespace std;

int maxChunksToSorted(vector<int> &arr)
{
    int chunk = 0;
    int n = arr.size();
    vector<int> rmin(n);
    rmin[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        rmin[i] = min(arr[i], rmin[i + 1]);
    }

    int maxSoFar = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        maxSoFar = max(maxSoFar, arr[i]);
        if (maxSoFar <= rmin[i + 1])
        {
            chunk++;
        }
    }

    return chunk + 1;
}

int main()
{
    vector<int> arr = {2, 1, 3, 4, 4};
    cout << maxChunksToSorted(arr) << endl;
    return 0;
}