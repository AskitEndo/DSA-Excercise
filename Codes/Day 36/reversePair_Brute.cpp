// Given an integer array nums, return the number of reverse pairs in the array.
// https://leetcode.com/problems/reverse-pairs/

#include <bits/Stdc++.h>
using namespace std;

// -----

int reversePairs(vector<int> &nums)
{
    int cnt = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] > nums[j] && nums[i] > 2 * nums[j])
                cnt++;
        }
    }
    return cnt;
}

// -----

int main()
{
    vector<int> data = {1, 3, 2, 3, 1};
    int res = reversePairs(data);
    cout << res << endl;
    return 0;
}