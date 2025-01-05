// Counying the max subaary with given XOR or elements. Better appraoch
// https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1

#include <bits/Stdc++.h>
using namespace std;

// ------

long subarrayXor(vector<int> &arr, int k)
{
    int n = arr.size();
    long cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int XOR = 0;

        for (int j = i; j < n; j++)
        {

            XOR = XOR ^ arr[j];

            if (XOR == k)
            {
                cnt++;
            }
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