// Returns array of majority n/3 elemtns
// Link: https://leetcode.com/problems/majority-element-ii/

#include <bits/Stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int mv = n / 3;
    vector<int> fr;
    unordered_map<int, int> data;
    for (int i = 0; i < n; i++)
    {
        data[nums[i]]++;
    }
    for (auto it : data)
    {
        if (it.second > mv)
        {
            fr.push_back(it.first);
        }
    }
    return fr;
}

int main()
{
    vector<int> v = {1, 2, 2, 2, 2, 4, 4, 4, 4, 4, 7};
    vector<int> res = majorityElement(v);
    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}