// Sort colors on 0,1,2;
// LeetCode Link: https://leetcode.com/problems/sort-colors/

#include<bits/Stdc++.h>
using namespace std;


void sortColors(vector<int>& nums) {
        int b=0;
        int m=0;
        int l=nums.size()-1;
        
        while(m<=l){
            if(nums[m]==0){
                swap(nums[b],nums[m]);
                    b++;m++;
                }
            else if(nums[m]==1){
                m++;
            }else{
                swap(nums[m],nums[l]);
                l--;
            }
        }
}

int main()
    {
        vector<int> res = {0,1,2,2,1,1,1,0};

        for(auto i: res){
            cout<<i<<" ";
        }

        cout<<endl;

        sortColors(res);

        for(auto i: res){
            cout<<i<<" ";
        }

        cout<<endl;
        return 0;

    }