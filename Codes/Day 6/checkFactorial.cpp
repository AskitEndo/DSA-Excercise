// returns array containing all factorial numbers which are less than/equal to ‘n’.
// Link: https://www.naukri.com/code360/problems/factorial-numbers-not-greater-than-n_8365435


#include<bits/stdc++.h>
using namespace std;

long long fc(long long n){
    if(n==0) return 1;
    return n*fc(n-1);
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> r;
    long long i=1;
    while(fc(i)<=n){
        r.push_back(fc(i));
        i++;
    }
    return r;
}
int main()
{
    long long n;cin>>n;

    vector<long long>res = factorialNumbers(n);

    for(auto i : res){
        cout<<i<<" ";
    }
    return 0;
}