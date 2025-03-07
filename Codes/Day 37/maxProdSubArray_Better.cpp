// Given an integer array nums, find a subarray that has the largest product, and return the product.
// https://leetcode.com/problems/maximum-product-subarray/

#include <bits/Stdc++.h>
using namespace std;

// -----

int maxProduct(vector<int> &nums)
{
    int cnt = nums[0];
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int p = nums[i];
        for (int j = i + 1; j < nums.size(); j++)
        {
            cnt = max(cnt, p);
            p *= nums[j];
        }
        cnt = max(cnt, p);
    }
    return cnt;
}
// -----

int main()
{
    vector<int> data = {2, 3, -2, 4};
    cout << maxProduct(data) << endl;
    return 0;
}