// Checks whether the input is prime or not
// Link: https://www.naukri.com/code360/problems/check-prime_624934 



#include<iostream>
using namespace std;

bool isPrimeBasic(int n){
    bool prime = true;
    if (n==0){
        prime = false;}
    else if (n==1)
    {
        prime= false;
    }else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                prime=false;
                break;
            }
            }
    }
    return prime;
}

bool isPrimeOptimal(int n) {
  if (n == 1) {
    return false;
  }
  int fc = 0;
  for (int i = 1; i * i < n; i++) { 
    if (n % i == 0) {
      fc++;
      if ((n / i) != i) fc++;
    }
  } 
  return fc == 2;
}



int main()
{
    int n;cin>>n;

    cout<<isPrimeBasic(n)<<endl;
    cout<<isPrimeOptimal(n)<<endl;
    return 0;
}