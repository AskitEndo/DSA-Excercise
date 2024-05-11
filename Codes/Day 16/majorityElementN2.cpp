// Returns the majority element which occurs more then n/2 times
// LeetCode Link: https://leetcode.com/problems/majority-element/


#include<bits/Stdc++.h>
using namespace std;


// HashMap
int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int mj = n/2+1;
        unordered_map<int, int> data;
        for(int i=0;i<n;i++){
            data[nums[i]]++;
        }

        for(auto it : data){
            if(it.second>=mj) return it.first;
        }

        return 0;
}



int main()
{
    vector<int> res = {1,2,3,3,3,3,4,5};
    cout<<majorityElement(res);
    return 0;
}