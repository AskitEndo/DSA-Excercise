// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// https://leetcode.com/problems/container-with-most-water/description/

#include <bits/Stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int n = height.size();
    int left = 0;
    int right = n - 1;
    long long vol = 0, maxV = 0;
    while (left <= right)
    {
        vol = min(height[left], height[right]) * abs(right - left);
        maxV = max(vol, maxV);
        if (height[left] <= height[right])
            left++;
        else
        {
            right--;
        }
    }
    return int(maxV);
}

int main()

{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height) << endl;
    return 0;
}