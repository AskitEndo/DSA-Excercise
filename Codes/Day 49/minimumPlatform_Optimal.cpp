// Given arrival arr[] and departure dep[] times of trains on the same day, find the minimum number of platforms needed so that no train waits.
// https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

#include <bits/Stdc++.h>
using namespace std;

int minPlatform(vector<int> &arr, vector<int> &dep)
{
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int n = arr.size();
    int i = 0, j = 0;
    int platforms_needed = 0, max_platforms = 0;

    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {

            platforms_needed++;
            i++;
        }
        else
        {

            platforms_needed--;
            j++;
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