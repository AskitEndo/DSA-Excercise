// Return appropriate  count of range of the number
// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

#include <bits/Stdc++.h>
using namespace std;

// -----

int countFreq(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int first = -1, last = -1;

    // Find the first occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            first = mid;
            end = mid - 1;
        }
    }

    // If target is not found
    if (first == -1)
        return 0;

    start = 0, end = arr.size() - 1;

    // Find the last occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            last = mid;
            start = mid + 1;
        }
    }

    return last - first + 1;
}

// -----

int main()
{
    vector<int> data = {5, 7, 7, 8, 8, 8, 8, 8, 10};
    int result = countFreq(data, 8);
    cout << result;
    return 0;
}