// A code that finds gcd of two numbers. Version 1
// Link:https://www.naukri.com/code360/problems/hcf-and-lcm_840448


#include<iostream>
using namespace std;

int calcGCD(int n, int m){
    int div;
    if( n>m) {
        div =n;
    }else{
        div=m;
    }
    int gcd=1;

    for (int i = 2; i<=div; i++){
        if (n%i==0 && m%i==0 ){
            gcd=i;
        }
    }
    return gcd;
}
int main()
{
    int n,m;cin>>n>>m;
    cout<<calcGCD(n,m);
    return 0;
}