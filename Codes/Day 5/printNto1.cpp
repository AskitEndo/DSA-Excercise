// Print n to 1  using recursion
// Link: https://www.naukri.com/code360/problems/n-to-1-without-loop_8357243

#include<bits/stdc++.h>
using namespace std;

vector<int> printNos(int n) {
if(n>0){
    cout<<n<<" ";
    printNos(n-1);
}return {};}




int main()
{
    int n;cin>>n;
    printNos(n);
    return 0;
}