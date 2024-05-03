// Returns Second Largest and Second Smallest Without soritng the array
// Link: https://www.naukri.com/code360/problems/ninja-and-the-second-order-elements_6581960


#include<bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a){
    int max = *max_element(a.begin(),a.end());
    int min = *min_element(a.begin(),a.end());
    int sl = min;
    int ss = max;
    vector<int> r;
    
    for(int i = 0; i < n; i++){
        if(a[i] < max && a[i] > sl) sl = a[i];
        if(a[i] > min && a[i] < ss) ss = a[i];
    }
    
    r.push_back(sl);
    r.push_back(ss);
    
    return r;
}


int main()
{
    vector<int> x = {1,2,3,4,5,6,7,8};
    int n = x.size();
    vector <int> res = getSecondOrderElements(n, x);

    for (auto it : res){
        cout<<it<<" ";
    }
    return 0;
}