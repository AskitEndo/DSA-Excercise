// Returns whether the program in palindrome or not
// Link: https://www.naukri.com/code360/problems/palindrome-number_624662

#include<iostream>
using namespace std;

bool palindrome(int n)
{
  	int rev=0;
    int num =n;
    while(n>0){
        rev = rev *10 + n %10;
        n=n/10;
    }
    return rev==num;
}

int main()
{
    int n;cin>>n;

    cout<<palindrome(n);
    return 0;
}