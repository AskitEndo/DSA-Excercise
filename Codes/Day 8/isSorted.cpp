// Checks whether if the array is sorted
// Link: https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957 


#include<bits/stdc++.h>
using namespace std;
int isSorted(int n, vector<int> a){
    int s = 0;
    for(int i = 0; i < n - 1; i++){
        if(a[i + 1] >= a[i]) s++;
    }
    if(s == n - 1) return 1;
    else return 0;
}


int main()
{
    vector<int> x = {1,2,3,4,5};
    int n = x.size();
    cout<<isSorted(n,x);
    return 0;
}