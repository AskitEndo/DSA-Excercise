#include<bits/Stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int numRows = matrix.size();
    int numCols = matrix[0].size();

    vector<bool> zeroRows(numRows, false);
    vector<bool> zeroCols(numCols, false);

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (matrix[i][j] == 0) {
                zeroRows[i] = true;
                zeroCols[j] = true;
            }
        }
    }
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (zeroRows[i] || zeroCols[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}


int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };


    for ( auto row: matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    cout<<"After Setting"<<endl;

    setZeroes(matrix);

    for ( auto row: matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}