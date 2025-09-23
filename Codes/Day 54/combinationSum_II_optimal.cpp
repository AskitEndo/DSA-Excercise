// Return array of arrays of all the unique combinations of candidates where the chosen numbers sum to target.
// Each number in candidates may only be used once in the combination.
// https://leetcode.com/problems/combination-sum-ii/

#include <bits/Stdc++.h>
using namespace std;

void findSeq(int idx, int trgt, vector<int> &curr, vector<vector<int>> &ans, vector<int> &ds)
{
    if (trgt == 0)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = idx; i < curr.size(); i++)
    {
        if (i > idx && curr[i] == curr[i - 1])
            continue;
        if (curr[i] > trgt)
            break;
        ds.push_back(curr[i]);
        findSeq(i + 1, trgt - curr[i], curr, ans, ds);
        ds.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;
    findSeq(0, target, candidates, ans, ds);
    return ans;
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