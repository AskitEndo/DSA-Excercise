// Returns the largest elemnent in the array
// Link: https://www.naukri.com/code360/problems/largest-element-in-the-array-largest-element-in-the-array_5026279

#include <bits/stdc++.h> 
using namespace std;


int largestElement(vector<int> &arr, int n) {
sort(arr.begin(), arr.end());
return(arr[arr.size()-1]);
}


int main()
{
    vector<int> x={0,1,2,3,4,55,67,65,44};
    int n = x.size();

    cout<<"Largest Element "<<largestElement(x,n);
    return 0;
}