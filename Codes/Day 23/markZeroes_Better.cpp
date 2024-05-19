// if matrix conatins zero mark the entire row and column as zero.
// Link: https://leetcode.com/problems/set-matrix-zeroes/

#include <bits/Stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int numRows = matrix.size();
    int numCols = matrix[0].size();
    int col0 = 1;

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;

                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    for (int i = 1; i < numRows; i++)
    {
        for (int j = 1; j < numCols; j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[0][j] == 0 || matrix[i][0] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < numCols; j++)
        {
            matrix[0][j] = 0;
        }
    }

    if (col0 == 0)
    {
        for (int i = 0; i < numRows; i++)
        {
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}};

    for (auto row : matrix)
    {
        for (int elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    cout << "After Setting" << endl;

    setZeroes(matrix);

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