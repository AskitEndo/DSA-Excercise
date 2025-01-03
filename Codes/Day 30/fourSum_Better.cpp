// Solves the foursum problem
// https://leetcode.com/problems/4sum/

#include <bits/Stdc++.h>
using namespace std;

// -----

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    set<vector<int>> st;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            set<int> hshst;
            for (int k = 0; k < nums.size(); k++)
            {
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                long long l = target - sum;
                if (hshst.find(l) != hshst.end())
                {
                    vector<int> temp = {nums[i],
                                        nums[j],
                                        nums[k],
                                        int(l)};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                    {
                    }
                }
                hshst.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
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