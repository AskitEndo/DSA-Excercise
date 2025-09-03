// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
// https://leetcode.com/problems/squares-of-a-sorted-array/description/

#include <bits/Stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
    vector<int> ans(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        ans[i] = nums[i] * nums[i];
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> result = sortedSquares(nums);
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}