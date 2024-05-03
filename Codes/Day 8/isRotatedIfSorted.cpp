// Checks whether a sorted array is rotated or not
// Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

#include<bits/stdc++.h>
using namespace std;


vector<int> rotateArraybyX(int n,int x,vector<int> a){
    vector<int> rArr(n);
    int si=x%n;
    for(int i = 0;i<n;i++){
        rArr[i]=a[(i+si)%n];
    }
    return rArr;
}

bool check(vector<int>& nums) {
    vector<int> sub = nums;bool match;
    sort(sub.begin(),sub.end());
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        vector<int> rotated = rotateArraybyX(n, i, nums);
        if (rotated == sub) {
            return true;
        }
    }
    return false;
}


int main()
{
    vector<int> res = {5,6,1,2,3,4};
    cout<<check(res);
    return 0;
}