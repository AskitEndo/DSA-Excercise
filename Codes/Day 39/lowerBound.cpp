// find LowerBound of the number
// https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

#include <bits/Stdc++.h>
using namespace std;

// -----
int findFloor(vector<int> &arr, int x)
{

    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (end + start) / 2;

        if (arr[mid] <= x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

// -----

int main()
{
    vector<int> data = {};
    findFloor(data, 5);
    return 0;
}
