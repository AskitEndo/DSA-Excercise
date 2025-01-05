// Find number of pairs whose sum is less than the target;
// https://www.geeksforgeeks.org/problems/count-pairs-whose-sum-is-less-than-target/1

#include <bits/Stdc++.h>
using namespace std;

// ------

int countPairs(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int i = 0;
    int j = n - 1;
    int cnt = 0;

    if (n < 2)
        return 0;

    while (i < j)
    {

        if (arr[i] + arr[j] < target)
        {
            cnt += (j - i);
            i++;
        }
        else
        {
            j--;
        }
    }
    return cnt;
}

// ------

int main()
{
    vector<int> arr{7, 2, 5, 3};
    int trgt = 8;
    int val = countPairs(arr, trgt);
    cout << val << endl;
    return 0;
}