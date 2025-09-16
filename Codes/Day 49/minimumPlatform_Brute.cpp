// Given arrival arr[] and departure dep[] times of trains on the same day, find the minimum number of platforms needed so that no train waits.
// https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

#include <bits/Stdc++.h>
using namespace std;

// Brute Force Approach O(n^2)

int minPlatform(vector<int> &arr, vector<int> &dep)
{
    int n = arr.size();
    int max_platforms = 1; // At least one train needs one platform

    for (int i = 0; i < n; i++)
    {
        int platforms_needed = 1; // Platform needed for current train

        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            // Check if train j overlaps with train i
            if (arr[i] <= dep[j] && arr[j] <= dep[i])
            {
                platforms_needed++;
            }
        }

        max_platforms = max(max_platforms, platforms_needed);
    }

    return max_platforms;
}

int main()
{
    vector<int> arr = {1000, 1010, 1020, 1030, 1040};
    vector<int> dep = {1015, 1025, 1035, 1045, 1055};

    cout << "Minimum platforms needed: " << minPlatform(arr, dep) << endl;

    return 0;
}