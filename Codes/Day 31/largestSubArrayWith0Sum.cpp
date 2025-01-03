// Return the largest sub array with 0 sum
// https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/

#include <bits/Stdc++.h>
using namespace std;

int maxLen(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> mpp;
    int curr = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0)
        {
            curr = i + 1;
        }
        else
        {
            if (mpp.find(sum) != mpp.end())
            {
                curr = max(curr, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }
    }
    return curr;
}

int main()
{
    vector<int> data{15, -2, 2, -8, 1, 7, 10, 23};
    int ans = maxLen(data);
    cout << ans << endl;
    return 0;
}