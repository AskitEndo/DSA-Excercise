// find Upper Bound of the number
// https://www.geeksforgeeks.org/problems/implement-upper-bound/1

#include <bits/Stdc++.h>
using namespace std;

// -----
int upperBound(vector<int> &arr, int x)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = (end + start) / 2;

        if (arr[mid] > x)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}
// -----

int main()
{
    vector<int> data = {2, 3, 7, 10, 11, 11, 25};
    cout << upperBound(data, 9);
    return 0;
}
