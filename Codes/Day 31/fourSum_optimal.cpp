// Solves the foursum problem
// https://leetcode.com/problems/4sum/

#include <bits/Stdc++.h>
using namespace std;

// -----

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (j != i + 1 && nums[j] == nums[j - 1])
                continue;
            int k = j + 1;
            int l = nums.size() - 1;

            while (k < l)
            {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];

                if (sum == target)
                {
                    vector<int> temp{nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    while (k < l && nums[k] == nums[k + 1])
                        k++;
                    while (k < l && nums[l] == nums[l - 1])
                        l--;
                    k++;
                    l--;
                }
                else if (sum < target)
                {
                    k++;
                }
                else
                    l--;
            }
        }
    }
    return ans;
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