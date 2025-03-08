// Implement binary search o(log(n)) to find element
// https://leetcode.com/problems/binary-search/

#include <bits/Stdc++.h>
using namespace std;

// -----
int search(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}
// -----
int main()
{
    vector<int> data = {-1, 0, 3, 5, 9, 12};
    cout << search(data, 4) << endl;
    cout << search(data, 3) << endl;
    return 0;
}