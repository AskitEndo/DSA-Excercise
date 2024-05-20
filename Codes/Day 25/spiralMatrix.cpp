// Print MAtrix in spiral manner
// Link: https://leetcode.com/problems/spiral-matrix/description/

#include <bits/Stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
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