// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.
// https://leetcode.com/problems/first-missing-positive/description/
// Using Hashing/Set [extra space O(n)]

#include <bits/Stdc++.h>

using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    unordered_set<int> numSet(nums.begin(), nums.end());
    int i = 1;
    while (numSet.find(i) != numSet.end())
    {
        i++;
    }
    return i;
}

int main()
{
    vector<int> nums = {3, 4, -1, 1};
    cout << firstMissingPositive(nums) << endl;
    return 0;
}