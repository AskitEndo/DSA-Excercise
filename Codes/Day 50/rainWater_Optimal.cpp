// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
// https://leetcode.com/problems/trapping-rain-water/description/

#include <bits/Stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    int left = 0, right = height.size() - 1;
    int lmax = 0, rmax = 0;
    int total = 0;

    while (left <= right)
    {
        if (height[left] <= height[right])
        {
            if (height[left] >= lmax)
                lmax = height[left];
            else
                total += lmax - height[left];
            left++;
        }
        else
        {
            if (height[right] >= rmax)
                rmax = height[right];
            else
                total += rmax - height[right];
            right--;
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