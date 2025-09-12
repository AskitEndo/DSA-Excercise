// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.
// https://leetcode.com/problems/first-missing-positive/description/
// In O(1) space and O(n) time

#include <bits/Stdc++.h>

using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
        {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != i + 1)
        {
            return i + 1;
        }
    }

    return n + 1;
}

int main()
{
    vector<int> nums = {3, 4, -1, 1};
    cout << firstMissingPositive(nums) << endl;
    return 0;
}