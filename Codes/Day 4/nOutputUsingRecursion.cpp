// Printing 1 to N using Recursion and no loops;
// Link: https://www.naukri.com/code360/problems/print-1-to-n_628290

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> printNos(int x) {
    if (x == 1) {
        return {1};
     }
    vector<int> result = printNos(x - 1);
    result.push_back(x);
    return result;
}

int main()
{
    int n;cin>>n;
    vector<int> rslt = printNos(n);

    

    for(int num : rslt){
        cout<<num<<" "<<endl;
        
    }
    return 0;
}