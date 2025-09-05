// Returns the majority element which occurs more then n/2 times
// LeetCode Link: https://leetcode.com/problems/majority-element/

#include <bits/Stdc++.h>
using namespace std;

// Sorting
int majorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int i = nums.size() / 2;
    return nums[i];
}

int main()
{
    vector<int> res = {1, 2, 3, 3, 3, 3, 4, 5};
    cout << majorityElement(res);
    return 0;
}