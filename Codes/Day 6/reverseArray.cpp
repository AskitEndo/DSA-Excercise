// reverses array usng recursion as base
// Link: https://www.naukri.com/code360/problems/reverse-an-array_8365444


#include<bits/stdc++.h>
using namespace std;


// Not Optimal
// vector<int> reverseArray(int n, vector<int> &nums)
// {   
//     vector<int> rArr;
//     for(int i=0;i<n;i++) rArr.emplace(rArr.begin(),nums[i]);
//     return rArr;
// }


// optimal
void rev(int i,int n,vector<int> &arr) {
    if(i>=n ) return;
    swap(arr[i],arr[n]);
    rev(i+1,n-1,arr);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    int i =0; int j=n-1;
    rev(i,j,nums);
    return nums;
}



int main()
{
        vector<int> v = {1,2,3,4,5};
        int n = 5;
        

    vector<int>res = reverseArray(n,v);

    for(auto i : res){
        cout<<i<<" ";
    }
    return 0;
}