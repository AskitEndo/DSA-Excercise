// Given an array of integers arr[]. Find the Inversion Count in the array.
// https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

#include <bits/Stdc++.h>
using namespace std;

// -----
int mergeAndCount(vector<int> &arr, vector<int> &temp, int left, int right)
{
    int mid = left + (right - left) / 2;
    int i = left, j = mid + 1, k = left;
    int invCount = 0;

    // Merge the two halves
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            // There are mid - i inversions, because all elements left in the left subarray
            // (arr[i], arr[i+1], ..., arr[mid]) are greater than arr[j]
            temp[k++] = arr[j++];
            invCount += (mid - i + 1); // Count the inversions
        }
    }

    // Copy the remaining elements of the left subarray, if any
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    // Copy the remaining elements of the right subarray, if any
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    // Copy the sorted subarray into the original array
    for (i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }

    return invCount;
}

// Merge Sort function that counts inversions
int mergeSortAndCount(vector<int> &arr, vector<int> &temp, int left, int right)
{
    int invCount = 0;
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        invCount += mergeSortAndCount(arr, temp, left, mid);      // Left subarray
        invCount += mergeSortAndCount(arr, temp, mid + 1, right); // Right subarray

        invCount += mergeAndCount(arr, temp, left, right); // Merge and count inversions
    }
    return invCount;
}

int inversionCount(vector<int> &arr)
{
    vector<int> temp(arr.size());
    return mergeSortAndCount(arr, temp, 0, arr.size() - 1);
}
// -----

int main()
{

    vector<int> arr = {2, 4, 1, 3, 5};
    cout << "Inversion Count: " << inversionCount(arr) << endl;
    return 0;
}