#include <bits/stdc++.h> 
using namespace std;


//Code Ninja
long long int reverseNumber(long long int n)
{
	long long int rn=0;
	long long int given = n;
	while(given>0){
		int digit = given%10;
		rn=rn*10+digit;
		given/=10;
	}
	return rn;
}

// LeetCode
int reverseLC(int x) {
        int rn=0;
	    while(x){
        if(rn>INT_MAX/10|| rn<INT_MIN/10) return 0;
		rn=rn*10+x%10;
		x/=10;
	    }
	return rn; 
    }

int main(){
    long long int n;cin>>n;
    cout<<reverseNumber(n)<<endl;
    cout<<reverseLC(n)<<endl;
    return 0;
}
