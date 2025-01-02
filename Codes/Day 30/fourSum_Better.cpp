// Solves the foursum problem
// https://leetcode.com/problems/4sum/

#include <bits/Stdc++.h>
using namespace std;

// -----

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
}

// -------

void printVector(const vector<int> &v)
{
    for (int num : v)
    {
        cout << num << " ";
    }
}

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);

    cout << "Unique Quadplets that sum to target are: " << endl;
    for (auto it : result)
    {
        cout << "[";
        printVector(it);
        cout << "]" << endl;
    }
    return 0;
}