//  Gives total sum of all divisors of that number. Fixed Time Limit
//  Link: https://www.naukri.com/code360/problems/sum-of-all-divisors_8360720

#include<iostream>
using namespace std;

int sumOfAllDivisors(int n) {
  int total_sum = 0;
  int current_divisor = 1;

  while (current_divisor <= n) {
    int paired_divisor = n / current_divisor; 
    int upper_limit = n / paired_divisor;  
    int range_sum = (upper_limit * (upper_limit + 1)) / 2 - (current_divisor * (current_divisor - 1)) / 2;

    total_sum += range_sum * paired_divisor;  

    current_divisor = upper_limit + 1;  
  }

  return total_sum;
}


int main()
{
    int n;cin>>n;

    cout<<sumOfAllDivisors(n);
    return 0;
}