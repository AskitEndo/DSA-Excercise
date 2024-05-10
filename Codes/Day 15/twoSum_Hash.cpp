// Returns both elements of array which sum up to the given number.
// https://leetcode.com/problems/two-sum/


#include<bits/Stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> data;

    for (int i = 0; i < nums.size(); i++)
    {
        data[nums[i]]=i;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if(data.count(complement) && data[complement]!=i){
            return{i,data[complement]};
        }

    }
    

    return {};
    
}



int main()
{
    vector<int> v = {1,2,3,4,5};int t =9;
    vector<int> res = twoSum(v,t);

    for(auto it : res){
        cout<<it<<" ";
    }
    return 0;
}