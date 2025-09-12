// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.
// https://leetcode.com/problems/first-missing-positive/description/
// Using O(n^2) Brute Force

#include <bits/Stdc++.h>

using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    int r = *max_element(nums.begin(), nums.end());
    for (int i = 1; i <= r; i++)
    {
        if (find(nums.begin(), nums.end(), i) == nums.end())
        {
            return i;
        }
    }
    return r > 0 ? r + 1 : 1;
}

int main()
{
    vector<int> nums = {3, 4, -1, 1};
    cout << firstMissingPositive(nums) << endl;
    return 0;
}