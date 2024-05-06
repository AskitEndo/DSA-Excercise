// Returns the number of consecutive ones in the array.
// CodeNinja Link: https://www.naukri.com/code360/problems/maximum-consecutive-ones_3843993
// LeetCode Link: https://leetcode.com/problems/max-consecutive-ones/description

#include<bits/Stdc++.h>
using namespace std;

int consecutiveOnes(vector<int>& arr) {
    int n = arr.size();
    int m = 0;
    int currentCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            currentCount++;
            m = max(m, currentCount);
        } else {
            currentCount = 0;
        }
    }

    return m;
}

int main()
{
    vector<int> v = {1,2,3,4,5,1,1,1,1,1,2,3};
    cout<<consecutiveOnes(v);
    return 0;
}