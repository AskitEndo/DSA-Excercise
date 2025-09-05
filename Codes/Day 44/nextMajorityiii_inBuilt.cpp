// Next Majority Element which is next in permutation but is not and interger overload
// https://leetcode.com/problems/next-greater-element-iii/description/

#include <bits/Stdc++.h>
using namespace std;

int nextGreaterElement(int n)
{
    string digits = to_string(n);
    if (next_permutation(digits.begin(), digits.end()))
    {
        long long result = stoll(digits);
        if (result <= INT_MAX)
        {
            return (int)result;
        }
    }
    return -1;
}

int main()
{
    int n = 1234;
    cout << nextGreaterElement(n);
    return 0;
}