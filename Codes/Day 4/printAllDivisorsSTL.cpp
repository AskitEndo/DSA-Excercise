#include<iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int* printDivisors(int n, int &size) {

  vector<int> div;

  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      div.push_back(i);
      if (i * i != n) {
        div.push_back(n / i);
      }
    }
  }

  sort(div.begin(), div.end());

  size = div.size();

  int* div_arr = new int[size];
  for (int i = 0; i < size; i++) {
    div_arr[i] = div[i];
  }

  return div_arr;
}



int main() {
  int n;
  int nDivisors;

  cin >> n;

  int* divArr = printDivisors(n, nDivisors);

  for (int i = 0; i < nDivisors; i++) {
    cout << divArr[i] << " ";
  }
  cout << endl;

  delete[] divArr;

  return 0;
}