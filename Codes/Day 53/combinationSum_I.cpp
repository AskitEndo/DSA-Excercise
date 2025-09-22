// Return array of arrays of size *returnSize.
// https://leetcode.com/problems/combination-sum/

#include <bits/Stdc++.h>
using namespace std;

void findSeq(int idx, int trgt, vector<int> &curr, vector<vector<int>> &ans, vector<int> &ds)
{
    if (idx == curr.size())
    {
        if (trgt == 0)
            ans.push_back(ds);
        return;
    }

    if (curr[idx] <= trgt)
    {
        ds.push_back(curr[idx]);
        findSeq(idx, trgt - curr[idx], curr, ans, ds);
        ds.pop_back();
    }

    findSeq(idx + 1, trgt, curr, ans, ds);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<int> ds;
    vector<vector<int>> ans;
    findSeq(0, target, candidates, ans, ds);
    return ans;
}

int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = combinationSum(candidates, target);
    for (const auto &combination : result)
    {
        for (int num : combination)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}