// Return appropriate range of the number
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include <bits/Stdc++.h>
using namespace std;

// -----

vector<int> searchRange(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    vector<int> ans = {-1, -1};

    // Binary search to find the leftmost occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    // Check if target exists in the array
    if (start < nums.size() && nums[start] == target)
    {
        ans[0] = start;
    }
    else
    {
        return ans; // target is not found
    }

    // Reset end to the last index
    end = nums.size() - 1;

    // Binary search to find the rightmost occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] <= target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    ans[1] = end; // rightmost index

    return ans;
}

// -----

int main()
{
    vector<int> data = {5, 7, 7, 8, 8, 10};
    vector<int> result = searchRange(data, 8);
    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}