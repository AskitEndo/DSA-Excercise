#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums){
    int cnt=0;
    int n = nums.size();
    for (int i = 0; i < n-1; i++)
    {
        if(nums[i]>nums[i+1]) cnt++;
    }
    if(cnt==1 && nums[0]>=nums[n-1]) return true;
    if(cnt==0) return true;
    else return false;
}

int main()
{
    vector<int> sample1 = {7,8,1,2,3,4,5,6};
    cout<<check(sample1)<<endl;
    vector<int> sample2 = {5,1,2,3,4,5,6};
    cout<<check(sample2)<<endl;
    return 0;
}