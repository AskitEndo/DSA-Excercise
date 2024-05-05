// Moves Zeroes to End
// CodeNinja Link: https://www.naukri.com/code360/problems/ninja-and-the-zero-s_6581958
// LeetCode Lnk: https://leetcode.com/problems/move-zeroes/

#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int lzi=0;int n = nums.size();
    for (int i =0;i<n;i++){
        if(nums[i]!=0){
            swap(nums[lzi],nums[i]);
            lzi++;
        }
    }
}

int main()
{
    vector<int> num= {1,2,0,0,0,0,2,3,4,45,0,23};

    for (auto i : num){
        cout<<i<<" ";
    }

    cout<<endl;

    moveZeroes(num);


        for (auto i : num){
        cout<<i<<" ";
    }


    return 0;
}
