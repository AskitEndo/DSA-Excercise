// Print 1 to n  using recursion
// Link: https://www.naukri.com/code360/problems/print-1-to-n_628290

#include<bits/stdc++.h>
using namespace std;

vector<int> printNos(int x) {
    vector<int> r;
    if (x == 0) return r;
    r = printNos(x - 1);
    r.push_back(x);
    return r;
}


int main()
{
    int n;cin>>n;

    vector<int> r = printNos(n);

    for (auto i: r){
        cout<<i<<" ";
    }
    return 0;
}