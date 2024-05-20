// Print Matrix in spiral manner
// Link: https://leetcode.com/problems/spiral-matrix/description/

#include <bits/Stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{

    int numRow = matrix.size();
    int numCol = matrix[0].size();
    int left = 0;
    int right = numCol - 1;
    int top = 0;
    int bottom = numRow - 1;

    vector<int> ans;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom)

        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
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

    cout << "Spiral Order" << endl;

    vector<int> res = spiralOrder(matrix);

    for (int elem : res)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}