// Perform range addition from an matrix to an array
// https://www.lintcode.com/problem/903/

#include <bits/Stdc++.h>
using namespace std;

// Brute Force Approach
vector<int> getModifiedArray(int length, vector<vector<int>> &updates)
{
    vector<int> ans(length, 0);
    for (int i = 0; i < updates.size(); i++)
    {
        for (int j = updates[i][0]; j <= updates[i][1]; j++)
        {
            ans[j] += updates[i][2];
        }
    }
    return ans;
}

int main()
{
    int length = 5;
    vector<vector<int>> updates = {{1, 3, 2}, {2, 4, 3}, {0, 2, -2}};
    vector<int> ans = getModifiedArray(length, updates);

    cout << "[";
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << "]" << endl;
    return 0;
}