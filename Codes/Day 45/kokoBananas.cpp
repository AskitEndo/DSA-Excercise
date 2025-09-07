// There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
// https://leetcode.com/problems/koko-eating-bananas/description/

#include <bits/Stdc++.h>
using namespace std;

long long calc(const vector<int> &p, int n)
{
    long long data = 0;
    for (int i = 0; i < (int)p.size(); i++)
    {
        data += (p[i] + n - 1LL) / n;
    }
    return data;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    int l = 1;
    int r = *max_element(piles.begin(), piles.end());
    int ans = r;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        long long temp = calc(piles, mid);

        if (temp <= h)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    cout << minEatingSpeed(piles, h);
    return 0;
}