// Rotate Array by K places
// CodeNinjas Link: https://www.naukri.com/code360/problems/rotate-array_1230543
// LeetCode Link: https://leetcode.com/problems/rotate-array/


#include<bits/stdc++.h>
using namespace std;


void rotate(vector<int>& nums, int k){
    int n = nums.size();
    vector<int> rArr(n);
    int si = (n - (k % n)) % n;
    for(int i = 0; i < n; i++) {
        rArr[i] = nums[(i + si) % n];
    }
    nums = rArr;
}


int main()
{
    
    vector<int> v = {3,4,5,6,1,2};int n = 2;

    for (auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;

    rotate(v,n);

        for (auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;



    return 0;
}