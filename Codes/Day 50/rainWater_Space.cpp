// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
// https://leetcode.com/problems/trapping-rain-water/description/

#include <bits/Stdc++.h>
using namespace std;

int trap(vector<int> &height)
{

    vector<int> pmax(height.size());
    pmax[0] = height[0];
    for (int i = 1; i < height.size() - 1; i++)
    {
        pmax[i] = max(pmax[i - 1], height[i]);
    }

    vector<int> smax(height.size());
    smax[height.size() - 1] = height[height.size() - 1];
    for (int i = height.size() - 2; i > 0; i--)
    {
        smax[i] = max(smax[i + 1], height[i]);
    }

    int total = 0;
    for (int i = 0; i < height.size() - 1; i++)
    {
        if (height[i] < pmax[i] && height[i] < smax[i])
        {
            total += min(pmax[i], smax[i]) - height[i];
        }
    }
    return total;
}

int main()
{
    vector<int> height = {4, 2, 0, 3, 2, 5};
    cout << trap(height) << endl;
    return 0;
}