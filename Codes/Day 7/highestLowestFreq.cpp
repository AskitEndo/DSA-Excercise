// Returns Highest and Lowest Frequency elemets
// https://www.naukri.com/code360/problems/k-most-occurrent-numbers_625382

#include<bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int>& v) {
    map<int,int> data;
    for(int i=0;i<v.size();i++){
        data[v[i]]++;
    }
    int maxf=0; int minf=INT_MAX;
    int lowest=0; int highest = 0;
    
    // map<int,int>::iterator it;
    for (auto it = data.begin();it!=data.end();++it){
        if(it->second<minf){
            minf = it->second;
            lowest = it->first;
        }
    }

    for (auto it = data.begin();it!=data.end();++it){
        if(it->second>maxf){
            maxf = it->second;
            highest = it->first;
        }
    }

    return{highest,lowest};

}

int main()
{
    int n; cin>>n;
     vector<int> arr{};int v;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter element "<<i+1;
        cin>>v;
        arr.push_back(v);
        cout<<endl;
    }
    vector<int> result = getFrequencies(arr);
    for(auto i : result){
        cout<<i<<endl;
    }
    return 0;
}