// sum of 1 to N
//link:https://www.naukri.com/code360/problems/sum-of-first-n-numbers_8876068


#include<bits/stdc++.h>
using namespace std;

long long sum = 0;
long long sumFirstN(long long n) {
    return (n*(n+1))/2;
}


int main()
{
    long long n;cin>>n;
    cout<<sumFirstN(n);
    return 0;
}