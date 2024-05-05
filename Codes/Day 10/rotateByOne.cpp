// Rotate Array by one place
// Link:https://www.naukri.com/code360/problems/left-rotate-an-array-by-one_5026278

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    int first = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
    return arr;
}

int main() {
    vector<int> arr = {3, 1, 6, 5, 10, 7, 6, 6, 1, 7};
    int n = arr.size();

    arr = rotateArray(arr, n);


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}