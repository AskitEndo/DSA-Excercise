// Sort colors on 0,1,2;
// LeetCode Link: https://leetcode.com/problems/sort-colors/

#include<bits/Stdc++.h>
using namespace std;


void sortColors(vector<int>& nums) {
        vector<int> res;
       int z = count(nums.begin(),nums.end(),0);
       for(int i = 0;i<z;i++){
        res.push_back(0);
       }
       int o = count(nums.begin(),nums.end(),1);
       for(int i = 0;i<o;i++){
        res.push_back(1);
       }
       int t = count(nums.begin(),nums.end(),2);
       for(int i = 0;i<t;i++){
        res.push_back(2);
       }

       
    nums = res;
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