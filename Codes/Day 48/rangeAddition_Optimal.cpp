// Perform range addition from an matrix to an array
// https://www.lintcode.com/problem/903/

#include <bits/Stdc++.h>
using namespace std;

// Optimal Approach: Using Difference Array
vector<int> getModifiedArray(int length, vector<vector<int>> &updates)
{
    vector<int> ans(length, 0);
    vector<int> psum(length + 1, 0);

    for (int i = 0; i < updates.size(); i++)
    {
        psum[updates[i][0]] += updates[i][2];
        psum[updates[i][1] + 1] -= updates[i][2];
    }
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += psum[i];
        ans[i] = sum;
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