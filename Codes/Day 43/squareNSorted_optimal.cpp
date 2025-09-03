// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
// https://leetcode.com/problems/squares-of-a-sorted-array/description/

#include <bits/Stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result(n);
    int left = 0, right = n - 1;
    int pos = n - 1;

    while (left <= right)
    {
        if (abs(nums[left]) > abs(nums[right]))
        {
            result[pos--] = nums[left] * nums[left];
            left++;
        }
        else
        {
            result[pos--] = nums[right] * nums[right];
            right--;
        }
    }

    return result;
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