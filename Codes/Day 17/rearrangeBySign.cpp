// Rearrange vector according to the order of alternative signs.
// Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/

#include<bits/Stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res;
        vector<int> pos;
        vector<int> neg;
    for(auto it : nums){
        if(it>0){
            pos.push_back(it);

        }else if (it<0)
        {
            neg.push_back(it);
        }
    }

    int n = nums.size();
    int pn = n/2;
    int i =0;

    while(i<pn){
        res.push_back(pos[i]);
        res.push_back(neg[i]);
        i++;
    }

    return res;

}

int main()
{
    vector<int> v = {3,1,-2,-5,2,-4};
    vector<int> res = rearrangeArray(v);

    for(auto i: v){
        cout<<i<<" ";
    }

    cout<<endl;

    for(auto i: res){
        cout<<i<<" ";
    }

    cout<<endl;


    return 0;
}