// returns whether the input in armstrongs number or not
// Link: https://www.naukri.com/code360/problems/check-armstrong_589

#include<iostream>
#include <cmath>

using namespace std;

bool checkArmstrong(int n){
	int len=0,sum=0;
	int num=n;
	while (num>0){
		num/=10;
		len++;
	}
	num=n;

	while (num > 0) {
        int digit = num % 10;
        sum=sum+pow(digit,len);
        num /= 10;
    }

	return sum==n;
}
int main()
{
    int n;cin>>n;
    cout<<checkArmstrong(n);
    return 0;
}