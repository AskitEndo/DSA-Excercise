//Returns the maximum length of subarray which sums up to K
// OPtimal for Negative arrays.
// Link: https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

#include<bits/Stdc++.h>
using namespace std;

int lenOfLongSubarr(int A[],  int N, int K) 
    { 
       unordered_map<int,int>mp;
        int sum = 0, ans = 0,i=0;
        mp[0] = -1;
        while(i<N)
        {
            sum+=A[i];
            if(mp.find(sum-K) != mp.end())
            {
                ans = max(ans,i-mp[sum-K]);
            }
            if(mp.find(sum)==mp.end())
                mp[sum] =i;
            i++;
        }
        return ans;
    }

int main()
{
    int a[] = {1,2,3,4,5,8,2,4};
    cout<<lenOfLongSubarr(a,8,10);
    return 0;
}