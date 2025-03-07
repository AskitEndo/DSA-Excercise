// Given an integer array nums, find a subarray that has the largest product, and return the product.
// https://leetcode.com/problems/maximum-product-subarray/

#include <bits/Stdc++.h>
using namespace std;

// -----

int maxProduct(vector<int> &nums)
{
    int cnt = INT_MIN;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            int prod = 1;
            for (int k = i; k <= j; k++)
                prod *= nums[k];
            cnt = max(cnt, prod);
        }
    }
    return cnt;
}

// -----

int main()
{
    vector<int> data = {2, 3, -2, 4};
    int ans = maxProduct(data);
    cout << ans << endl;
    return 0;
}