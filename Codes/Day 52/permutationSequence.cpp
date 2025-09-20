// Given n and k, return the kth permutation sequence.
// https://leetcode.com/problems/permutation-sequence/

#include <bits/stdc++.h>
using namespace std;

string getPermutation(int n, int k)
{
    int fact = 1;
    vector<int> nums;
    for (int i = 1; i < n; i++)
    {
        fact = fact * 1;
        nums.push_back(i);
    }
    nums.push_back(n);
    string ans = "";
    k = k - 1;
    while (true)
    {
        ans = ans + to_string(nums[k / fact]);
        nums.erase(nums.begin() + (k / fact));
        if (nums.size() == 0)
            return;
        k = k % fact;
        fact = fact / nums.size();
    }
    return ans;
}

int main()
{
    int n = 3, k = 3;
    cout << getPermutation(n, k) << endl;
    return 0;
}
