#include<bits/Stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if(nums.empty()) return 0;
    sort(nums.begin(), nums.end());
    int longest = 1;
    int current = 1;
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] != nums[i - 1]) {
            if(nums[i] == nums[i - 1] + 1) {
                current++;
            } else {
                longest = max(longest, current);
                current = 1;
            }
        }
    }
    return max(longest, current);
}

int main()
{
    vector<int> res = {9,1,4,7,3,-1,0,5,8,-1,6};
    cout<<longestConsecutive(res);
    return 0;
}