// return appropriate index to insert the number
// https://leetcode.com/problems/search-insert-position/

#include <bits/Stdc++.h>
using namespace std;

// -----

int searchInsert(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return start;
}

// -----

int main()
{
    vector<int> data = {1, 3, 5, 6};
    int target = 5;
    searchInsert(data, target);
    return 0;
}