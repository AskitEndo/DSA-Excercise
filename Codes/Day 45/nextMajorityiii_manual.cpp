// Next Majority Element which is next in permutation but is not and interger overload
// https://leetcode.com/problems/next-greater-element-iii/description/

#include <bits/Stdc++.h>
using namespace std;

int nextGreaterElement(int n)
{
    vector<int> dig;
    int temp = n;
    while (temp > 0)
    {
        dig.push_back(temp % 10);
        temp /= 10;
    }
    if (dig.size() <= 1)
        return -1;
    reverse(dig.begin(), dig.end());

    int i = dig.size() - 2;
    while (i >= 0 && dig[i] >= dig[i + 1])
    {
        i--;
    }
    if (i < 0)
        return -1;

    int j = dig.size() - 1;
    while (j > i && dig[j] <= dig[i])
    {
        j--;
    }

    swap(dig[i], dig[j]);

    int l = i + 1;
    int r = dig.size() - 1;
    while (l < r)
    {
        swap(dig[l], dig[r]);
        l++;
        r--;
    }

    long long res = 0;
    for (int it : dig)
    {
        res = res * 10 + it;
        if (res > INT_MAX)
            return -1;
    }

    return (int)res;
}

int main()
{
    int n = 101;
    cout << nextGreaterElement(n);
    return 0;
}