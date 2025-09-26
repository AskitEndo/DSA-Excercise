// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include <bits/Stdc++.h>
using namespace std;

void recursiveFunc(string &digits, int idx, string &current, vector<string> &answers, const vector<string> &phoneMap)
{

    if (idx == digits.length())
    {
        answers.push_back(current);
        return;
    }

    string letters = phoneMap[digits[idx] - '0'];
    for (char letter : letters)
    {
        current.push_back(letter);
        recursiveFunc(digits, idx + 1, current, answers, phoneMap);
        current.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> answers;
    string current;

    if (digits.empty())
        return answers;

    vector<string> phoneMap = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    recursiveFunc(digits, 0, current, answers, phoneMap);

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