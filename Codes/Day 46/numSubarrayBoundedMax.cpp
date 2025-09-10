// Given an array of integers A, and two integers L and R, return the number of (contiguous, non-empty) subarrays such that the value of the maximum array element in that subarray is at least L and at most R.
// https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum/description/

#include <bits/Stdc++.h>
using namespace std;

int numSubarrayBoundedMax(vector<int> &nums, int left, int right)
{
    return count(nums, right) - count(nums, left - 1);
}

int count(const vector<int> &nums, int bound)
{
    int ans = 0, cnt = 0;
    for (int x : nums)
    {
        cnt = x <= bound ? cnt + 1 : 0;
        ans += cnt;
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 1, 4, 3};
    int left = 2, right = 3;
    cout << numSubarrayBoundedMax(nums, left, right) << endl;
    return 0;
}