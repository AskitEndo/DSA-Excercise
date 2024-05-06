#include<bits/Stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
        if (i != nums[i]) return i;
    }
    return n;
}

int main() {
    vector<int> v = {0,1,3};
    cout << missingNumber(v);
    return 0;
}