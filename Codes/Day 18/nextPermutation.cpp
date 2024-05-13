// makes the array into its next permutation;
// Link: https://leetcode.com/problems/next-permutation

#include<bits/Stdc++.h>
using namespace std;


void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;
    while (i >= 0 && nums[i] >= nums[i+1]) i--;
    if (i >= 0) {        
        int j = n - 1;
        while (j >= 0 && nums[j] <= nums[i]) j--;
        swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());
}



int main()
{
    vector<int> res = {3,2,1};

    for(auto it : res){
        cout<<it<<" ";
    }
    cout<<endl;

    nextPermutation(res);

    for(auto it : res){
        cout<<it<<" ";
    }
    cout<<endl;



    return 0;
}