// Printing the sub array whiv has the maximum sum
// Link: https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0 


#include<bits/Stdc++.h>
using namespace std;

long long pairWithMaxSum(long long arr[], long long N) {
    long long ans = 0;
    int i = 0; int j = N-1;
    while(i<j){
        long long val = arr[i]+arr[i+1];
        ans = max(val, ans);
        i++;
    }
    return ans;
}


int main()
{
    long long  res[] = {4,3,1,5,6};
    cout<<pairWithMaxSum(res, 5);
    return 0;
}