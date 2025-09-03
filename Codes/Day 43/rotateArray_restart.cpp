// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
// https://leetcode.com/problems/rotate-array/description/

#include <bits/Stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> rArr(n);
    for (int i = 0; i < n; i++)
    {
        rArr[(i + k) % n] = nums[i];
    }
    nums = rArr;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;
    rotate(nums, k);
    for (int i : nums)
    {
        cout << i << " ";
    }
    return 0;
}