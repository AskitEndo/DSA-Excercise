// Linear Seacrh on an array
// Link: https://www.naukri.com/code360/problems/linear-search_6922070

#include<bits/Stdc++.h>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr)
{for(int i = 0;i<n;i++){
    if(arr[i]==num) return i;
}return -1;
}

int main()
{
    vector<int> nums= {1,2,0,0,0,0,2,3,4,45,0,23};
    int n = nums.size(); int num = 23;
    cout<<linearSearch(n,num,nums);
    return 0;
}