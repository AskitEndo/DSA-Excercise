// returns thr maximum subarray sum;
// LeetCode Link: https://leetcode.com/problems/maximum-subarray/

#include<bits/Stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        
        int Msum = nums[0];
        int sum = nums[0]; 
        
        for (int i = 1; i < n; i++) {
            sum = max(nums[i], sum + nums[i]);
            Msum = max(Msum, sum);
        }
        
        return Msum;
}

int main()
{
    vector<int> res = {1,2,3,4,-3,-22};
    cout<<maxSubArray(res);
    return 0;
}