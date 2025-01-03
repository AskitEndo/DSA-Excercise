// Return the largest sub array with 0 sum
// https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/

#include <bits/Stdc++.h>
using namespace std;

int maxLen(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int i = arr[0];
    int j = arr.size() - 1;
    int curr = 0;
    vector<int> temp;
    while (i > j)
    {
        int sum = arr[i] + arr[j];
        if (sum == 0)
        {
            temp.push_back({arr[i], arr[j]});
            curr = temp.size();
            i++;
            j--;
        }
        else if (sum < 0)
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j--;
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