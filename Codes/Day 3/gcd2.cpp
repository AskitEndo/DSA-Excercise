// A code that finds gcd of two numbers. Version 2
// Link:https://www.naukri.com/code360/problems/hcf-and-lcm_840448

#include <iostream>
using namespace std;

int calcGCD(int n, int m){
    while(n > 0 && m > 0){
        if(n>m){
            n = n%m;
        }
        else m = m%n;
    }
    if(n ==0)  return m;
    else return n;
}

int main() {
  int n, m;
  cin >> n >> m;

  cout << calcGCD(n, m);

  return 0;
}
