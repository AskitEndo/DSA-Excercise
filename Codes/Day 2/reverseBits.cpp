// This is A modearte difficulty problem which deals with bit manipulation
// Link: https://www.naukri.com/code360/problems/reverse-bits_2181102

#include<iostream>
using namespace std;

long reverseBits(long n){
    long value;
    int i = 0;
    while (i < 32) {
    long lsb = n & 1L;
    value <<= 1;
    value |= lsb;
    n >>= 1;
    i++;
  }
    return value;
}
 

int main()
{
    long n;
    cin>>n;
    cout<<reverseBits(n);
    return 0;
}