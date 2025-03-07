// Given an integer array nums, find a subarray that has the largest product, and return the product.
// https://leetcode.com/problems/maximum-product-subarray/

#include <bits/Stdc++.h>
using namespace std;

// -----

int maxProduct(vector<int> &nums)
{
    int res = INT_MIN;
    int pfx = 1;
    int sfx = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (pfx == 0)
            pfx = 1;
        if (sfx == 0)
            sfx = 1;

        pfx = pfx * nums[i];
        sfx = sfx * (nums.size() - 1 - nums[i]);
        res = max(res, max(pfx, sfx));
    }
    return res;
}

// -----

int main()
{
    vector<int> data = {2, 3, -2, 4};
    cout << maxProduct(data) << endl;
    return 0;
}