// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include <bits/Stdc++.h>
using namespace std;

vector<string> letterCombinations(string digits)
{
    vector<string> order = {"",
                            "",
                            "abc",
                            "def",
                            "ghi",
                            "jkl",
                            "mno",
                            "pqrs",
                            "tuv",
                            "wxyz"};

    if (digits.empty())
    {
        return {""};
    }

    vector<string> answers = {""};

    for (char digit : digits)
    {
        string letters = order[digit - '0'];

        vector<string> temp;
        for (string curr : answers)
        {
            for (char letter : letters)
            {
                temp.push_back(curr + letter);
            }
        }
        answers = temp;
    }

    return answers;
}

int main()
{
    string digits = "23";
    vector<string> result = letterCombinations(digits);

    for (const string &combination : result)
    {
        cout << combination << endl;
    }
    cout << endl;

    return 0;
}