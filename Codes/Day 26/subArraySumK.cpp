// Returns number of subarray that can sum up to K
// Link: https://leetcode.com/problems/subarray-sum-equals-k/

#include <bits/Stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> sumCount;
    int cnt = 0;
    int sum = 0;

    sumCount[0] = 1;

    for (int i = 0; i < nums.size(); ++i)
    {
        sum += nums[i];
        if (sumCount.find(sum - k) != sumCount.end())
        {
            cnt += sumCount[sum - k];
        }
        sumCount[sum]++;
    }

    return cnt;
}

int main()
{
    vector<int> v = {1, 2, 2};
    int kNum = 3;
    cout << subarraySum(v, kNum);
    return 0;
}