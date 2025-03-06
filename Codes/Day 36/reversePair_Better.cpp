#include <bits/stdc++.h>
using namespace std;

// Function Declarations
int reversePairs(vector<int> &nums);
int mergeSort(vector<int> &nums, int left, int right);
int countReversePairs(vector<int> &nums, int left, int mid, int right);
void merge(vector<int> &nums, int left, int mid, int right);

// -----
// Function Definitions

int reversePairs(vector<int> &nums)
{
    return mergeSort(nums, 0, nums.size() - 1);
}

int mergeSort(vector<int> &nums, int left, int right)
{
    if (left >= right)
    {
        return 0;
    }
    int mid = left + (right - left) / 2;
    int count = mergeSort(nums, left, mid) + mergeSort(nums, mid + 1, right);

    // Count the reverse pairs while merging
    count += countReversePairs(nums, left, mid, right);

    // Merge the two halves
    merge(nums, left, mid, right);

    return count;
}

int countReversePairs(vector<int> &nums, int left, int mid, int right)
{
    int count = 0;
    int j = mid + 1;

    // Count reverse pairs where nums[i] > 2 * nums[j]
    for (int i = left; i <= mid; i++)
    {
        while (j <= right && nums[i] > 2 * (long long)nums[j])
        {
            j++;
        }
        count += (j - (mid + 1)); // This is the number of valid reverse pairs for nums[i]
    }

    return count;
}

void merge(vector<int> &nums, int left, int mid, int right)
{
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    // Merge two sorted halves
    while (i <= mid && j <= right)
    {
        if (nums[i] <= nums[j])
        {
            temp[k++] = nums[i++];
        }
        else
        {
            temp[k++] = nums[j++];
        }
    }

    // Copy the remaining elements
    while (i <= mid)
    {
        temp[k++] = nums[i++];
    }

    while (j <= right)
    {
        temp[k++] = nums[j++];
    }

    // Copy the merged array back into the original array
    for (int i = 0; i < temp.size(); i++)
    {
        nums[left + i] = temp[i];
    }
}

// -----
// Main function to test the solution
int main()
{
    vector<int> data = {1, 3, 2, 3, 1};
    int res = reversePairs(data);
    cout << "Number of reverse pairs: " << res << endl;
    return 0;
}
