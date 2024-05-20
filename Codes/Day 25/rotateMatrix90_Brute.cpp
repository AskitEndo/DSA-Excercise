// Rotate any sqaure Matrix by 90 Degrees
// Link: https://leetcode.com/problems/rotate-image/description/

#include <bits/Stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int numRows = matrix.size();
    int numCols = matrix[0].size();

    vector<vector<int>> ans = matrix;

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            ans[j][numRows - 1 - i] = matrix[i][j];
        }
    }

    matrix = ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (auto row : matrix)
    {
        for (int elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    cout << "After 90 degree rotation" << endl;

    rotate(matrix);

    for (auto row : matrix)
    {
        for (int elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}