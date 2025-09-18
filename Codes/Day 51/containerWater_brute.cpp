// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// https://leetcode.com/problems/container-with-most-water/description/

#include <bits/Stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int i = 0, j = 0, vol = 0;
    int maxV = 0;
    for (i = 0; i < height.size(); i++)
    {
        for (j = i + 1; j < height.size(); j++)
        {
            vol = min(height[i], height[j]) * abs(j - i);
            maxV = max(vol, maxV);
        }
    }
    return maxV;
}

int main()

{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height) << endl;
    return 0;
}