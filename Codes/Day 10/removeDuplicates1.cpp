

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int cnt = nums.size();
    if (cnt == 0) return 0;
        
    int index = 0;
    for (int i = 1; i < cnt; i++) {
        if (nums[i] != nums[index]) {
                nums[++index] = nums[i];
        }
    }
        
    return index + 1;
}

int main()
{
    vector<int> v ={12,3,4,4,4,4,4,4,5,6,7,1,2};
    cout<<removeDuplicates(v);
    return 0;
}