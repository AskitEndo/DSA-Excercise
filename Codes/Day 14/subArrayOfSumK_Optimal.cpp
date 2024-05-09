//Returns the maximum length of subarray which sums up to K
// OPtimal for Positive numbers
// Link: https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

#include<bits/Stdc++.h>
using namespace std;

int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int left=0;
        int right=0;
        int sum = A[0];
        int maxLen=0;

        while(right<N){
            while(left<=right && sum > K){
                sum -= A[left];
                left++;
            }
            if(sum==K){
                maxLen = max(maxLen, right - left +1);
            }
            right++;
            if(right<N) sum += A[right];
        }

        return maxLen;

    }

int main()
{
    int a[] = {1,2,3,4,5,8,2,4};
    cout<<lenOfLongSubarr(a,8,10);
    return 0;
}