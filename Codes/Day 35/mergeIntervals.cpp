// merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
// https://leetcode.com/problems/merge-intervals/

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    if (intervals.empty())
        return {};

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> merged;

    merged.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++)
    {
        if (merged.back()[1] >= intervals[i][0])
        {
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        }
        else
        {
            merged.push_back(intervals[i]);
        }
    }

    return merged;
}

int main()
{

    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    vector<vector<int>> result = merge(intervals);

    for (const auto &interval : result)
    {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }

    return 0;
}
