// Given an unsorted array arr[] of integers and an integer x, find the floor and ceiling of x in arr[].
// https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1

#include <bits/Stdc++.h>
using namespace std;

// -----
vector<int> getFloorAndCeil(int x, vector<int> &arr)
{
    int floor = -1;
    int ceil = INT_MAX;
    for (auto nums : arr)
    {
        if (nums <= x)
        {
            floor = max(floor, nums);
        }
        if (nums >= x)
        {
            ceil = min(ceil, nums);
        }
    }
    if (ceil == INT_MAX)
        ceil = -1;
    return {floor, ceil};
}
// -----

int main()
{
    vector<int> data = {5, 6, 8, 9, 6, 5, 5, 6};
    vector<int> result = getFloorAndCeil(7, data);
    cout << "[";
    for (auto it : result)
    {
        cout << it << ",";
    }
    cout << "]" << endl;
    return 0;
}