// Given an integer array nums, find a subarray that has the largest product, and return the product.
// https://leetcode.com/problems/maximum-product-subarray/

#include <bits/Stdc++.h>
using namespace std;

// -----

int maxProduct(vector<int> &nums)
{
    if (nums.empty())
        return 0;

    int max_prod = nums[0], min_prod = nums[0], res = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {

            swap(max_prod, min_prod);
        }

        max_prod = max(nums[i], max_prod * nums[i]);
        min_prod = min(nums[i], min_prod * nums[i]);

        res = max(res, max_prod);
    }

    return res;
}

// -----

int main()
{
    vector<int> data = {2, 3, -2, 4};
    maxProduct(data);
    return 0;
}