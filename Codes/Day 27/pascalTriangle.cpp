// Returns upto the nth row of the pascal triangle
// Link: https://leetcode.com/problems/pascals-triangle/description/

#include <bits/Stdc++.h>
using namespace std;

vector<int> generateRow(int row)
{
    long long ans = 1;
    vector<int> ansrow;
    ansrow.push_back(1);

    for (int col = 1; col <= row; col++)
    {
        ans = ans * (row - col + 1) / col;
        ansrow.push_back(ans);
    }

    return ansrow;
}

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> arr;

    for (int i = 0; i < numRows; i++)
    {
        arr.push_back(generateRow(i));
    }

    return arr;
}

int main()
{
    int numRows = 5;
    vector<vector<int>> pascalTriangle = generate(numRows);

    for (const auto &row : pascalTriangle)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
