// simple problem of reversing a integer
// Link : https://www.naukri.com/code360/problems/reverse-of-a-number_624652

#include<iostream>
using namespace std;

int main() {
	int n,rev=0;
    cin>>n;
    while(n>0){
        rev = rev *10 + n %10;
        n=n/10;
    }
    cout<<rev;
}