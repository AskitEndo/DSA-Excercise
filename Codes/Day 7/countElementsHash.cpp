// Counting elements of a array using hashing
// Link: https://www.naukri.com/code360/problems/count-frequency-in-a-range_8365446

#include<bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> hash(n,0);
    for(int i = 0;i<n;i++){
        if(nums[i]<=n) hash[nums[i]-1]++;
    }
    return hash;
}

int main()
{
    int n; int hashSize; vector<int> arr{};int v;
    cin>>n>>hashSize;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter element "<<i+1;
        cin>>v;
        arr.push_back(v);
        cout<<endl;
    }

    vector<int> result = countFrequency(n,hashSize,arr);
    for(auto i : result){
        cout<<i<<endl;
    }
    
    return 0;
}