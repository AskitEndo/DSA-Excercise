// Return max count of chunks such that sorting each chunk individually and concatenating results in a sorted array
// https://leetcode.com/problems/max-chunks-to-make-sorted/

#include <bits/Stdc++.h>
using namespace std;

int maxChunksToSorted(vector<int> &arr)
{
    int cmax = -1;
    int res = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        cmax = max(arr[i], cmax);
        if (cmax == i)
            res += 1;
    }
    return res;
}

int main()
{
    vector<int> arr = {1, 0, 2, 3, 4};
    cout << maxChunksToSorted(arr) << endl;
    return 0;
}