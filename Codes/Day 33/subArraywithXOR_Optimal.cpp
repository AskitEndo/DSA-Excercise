// Counying the max subaary with given XOR or elements. Optimal appraoch
// https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1

#include <bits/Stdc++.h>
using namespace std;

// ------

long subarrayXor(vector<int> &arr, int k)
{
    int cnt = 0;
    int x;
    int xr = 0;
    unordered_map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[xr]++;
        xr = arr[i] ^ xr;
        x = xr ^ k;
        if (mpp.find(x) != mpp.end())
        {
            cnt = cnt + mpp[x];
        }
    }
    return cnt;
}

// ------

int main()
{
    vector<int> data{4, 2, 2, 6, 4};
    int trgt = 6;
    long ans = subarrayXor(data, trgt);
    cout << "Count is:" << ans << endl;
    return 0;
}