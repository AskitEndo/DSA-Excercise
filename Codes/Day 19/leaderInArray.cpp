// Returns the element which are greatest to the element to thier right.
// Link: https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

#include<bits/Stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n){
        int mx=a[n-1];
        vector<int>ans;
        ans.push_back(mx);
        for(int i=n-2; i>=0; i--){
            if(a[i]>=mx){
                mx=a[i];
                ans.push_back(mx);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    vector<int> res = leaders(arr,n);

    for(vector<int>::iterator it= res.begin(); it!=res.end();it++){
        cout<<*it<<" ";
    }

    return 0;
}