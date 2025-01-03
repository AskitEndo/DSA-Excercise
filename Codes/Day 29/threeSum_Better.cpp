// Three sum array
// Link :https://leetcode.com/problems/3sum

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    set<vector<int>> st;
    for (int i = 0; i < nums.size(); i++)
    {
        set<int> hashset;
        for (int j = i + 1; j < nums.size(); j++)
        {
            int th = -(nums[i] + nums[j]);
            if (hashset.find(th) != hashset.end())
            {
                vector<int> temp = {nums[i], nums[j], th};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);

    cout << "Unique triplets that sum to zero are: " << endl;
    for (const auto &triplet : result)
    {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++)
        {
            cout << triplet[i] << (i < triplet.size() - 1 ? ", " : "");
        }
        cout << "]" << endl;
    }

    return 0;
}
