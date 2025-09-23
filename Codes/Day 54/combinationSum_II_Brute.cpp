// Return array of arrays of all the unique combinations of candidates where the chosen numbers sum to target.
// Each number in candidates may only be used once in the combination.
// https://leetcode.com/problems/combination-sum-ii/

#include <bits/Stdc++.h>
using namespace std;

void findSeq(int idx, int trgt, vector<int> &curr, set<vector<int>> &ans, vector<int> &ds)
{
    if (idx == curr.size())
    {
        if (trgt == 0)
            ans.insert(ds);
        return;
    }

    if (curr[idx] <= trgt)
    {
        ds.push_back(curr[idx]);
        findSeq(idx + 1, trgt - curr[idx], curr, ans, ds);
        ds.pop_back();
    }

    findSeq(idx + 1, trgt, curr, ans, ds);
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    set<vector<int>> ans;
    vector<int> ds;
    findSeq(0, target, candidates, ans, ds);
    return vector<vector<int>>(ans.begin(), ans.end());
}

int main()
{
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    vector<vector<int>> result = combinationSum2(candidates, target);
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