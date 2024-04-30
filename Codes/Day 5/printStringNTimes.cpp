// Print name n times using recursion
// Link: https://www.naukri.com/code360/problems/-print-n-times_8380707

#include<bits/stdc++.h>
using namespace std;

vector<string> printNTimes(int n) {
    vector<string> r;
    if(n==0) return r;
    r = printNTimes(n-1);
    r.push_back("Coding Nnjas ");
    return r;
}


int main()
{
    int n;cin>>n;

    vector<string> r = printNTimes(n);

    for (auto i: r){
        cout<<i<<" ";
    }
    return 0;
}