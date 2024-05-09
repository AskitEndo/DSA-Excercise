#include<bits/Stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for(int i = 0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return{i,j};
                }
                
            }
        }
         return {};
    }

int main()
{
    vector<int> v = {1,2,3,4,5,5,5,5};int t =9;
    vector<int> res = twoSum(v,t);

    for(auto it : res){
        cout<<it<<" ";
    }
    return 0;
}