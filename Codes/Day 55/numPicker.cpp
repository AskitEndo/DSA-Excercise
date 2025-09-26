// Given an integer array nums of unique elements, return all possible subsets (the power set).
// https://leetcode.com/problems/subsets/

#include <bits/Stdc++.h>
using namespace std;

void recursor(int idx, vector<int> &current, vector<vector<int>> &ans, vector<int> &arr)
{

    if (idx == arr.size())
    {
        ans.push_back(current);
        return;
    }

    current.push_back(arr[idx]);
    recursor(idx + 1, current, ans, arr);
    current.pop_back();

    recursor(idx + 1, current, ans, arr);
}

vector<vector<int>> subsets(vector<int> &arr)
{
    vector<int> current;
    vector<vector<int>> ans;
    recursor(0, current, ans, arr);
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    vector<vector<int>> result = subsets(arr);
    for (const auto &subset : result)
    {
        cout << "{ ";
        for (int num : subset)
        {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
    return 0;
}