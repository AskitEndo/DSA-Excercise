// Checks Whther the string is pallindrome or not
// CodeNinjas Link: https://www.naukri.com/code360/problems/check-palindrome-recursive_624386
// LeetCode Link: https://leetcode.com/problems/valid-palindrome/


#include<bits/stdc++.h>

using namespace std;


// CODE NINJA
bool rev(int i,int n,string &s) {
    if(i>=n ) return true;
    if (s[i]!=s[n]) return false;
    else return rev(i+1,n-1,s);
}
bool isPalindrome(string& str) {
     int i =0; int j=str.size()-1;
    return rev(i,j,str);
}



// LEET CODE

bool revLC(int i,int n,string &s) {
    if(i>=n ) return true;
    while (i<n && !isalnum(s[i])) {
            i++;
        }
    while (i < n && !isalnum(s[n])) {
            n--;
        }
    return (tolower(s[i]) == tolower(s[n])) && revLC(i + 1, n - 1,s);
}


bool isPalindromeLC(string& str) {
     int i =0; int j=str.size()-1;
    return revLC(i,j,str);
}



int main()
{
    string s;cin>>s;
    cout<<isPalindrome(s)<<endl;
    cout<<isPalindromeLC(s)<<endl;
    return 0;
}