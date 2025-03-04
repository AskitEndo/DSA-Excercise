// Merging two arrays into one
// https://leetcode.com/problems/merge-sorted-array/

#include <bits/Stdc++.h>
using namespace std;

// -----

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int n1r = m + n - 1;
    int n1l = m - 1;
    int n2r = n - 1;
    while (n1l >= 0 && n2r >= 0)
    {
        if (nums2[n2r] > nums1[n1l])
        {
            nums1[n1r--] = nums2[n2r--];
        }
        else
        {
            nums1[n1r--] = nums1[n1l--];
        }
    }
    while (n2r >= 0)
    {
        nums1[n1r--] = nums2[n2r--];
    }

    for (auto it : nums1)
    {
        cout << it << endl;
    }
}

// -----

int main()
{
    vector<int> nums1{1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2{2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);
    return 0;
}