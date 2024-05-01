// Does printing and sumation of fibonacci series of n.
//CodeNinjas Link: https://www.naukri.com/code360/problems/print-fibonacci-series_7421617
// LeetCode Link: https://leetcode.com/problems/fibonacci-number/description/

#include<bits/stdc++.h>
using namespace std;


// Code Ninjas List of Fibbonacci

vector<int> generateFibonacciNumbers(int n) {
    vector<int> nums;
    if(n<=0)return nums;
    if(n==1){
        nums.push_back(0);
        return nums;
    }
    if(n==2){
        nums.push_back(0);
        nums.push_back(1);
        return nums;
    }
    nums = generateFibonacciNumbers(n-1);
    nums.push_back(nums[n-2]+nums[n -3]);
    return nums;
}

// LeetCode Fibonacci Number;

int fibNum(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        return fibNum(n-1)+fibNum(n-2);
}

int main()
{
    int n;cin>>n;

    vector<int>res = generateFibonacciNumbers(n);
    cout<<fibNum(n)<<endl;

    for(auto i : res){
        cout<<i<<" ";
    }
    return 0;
}