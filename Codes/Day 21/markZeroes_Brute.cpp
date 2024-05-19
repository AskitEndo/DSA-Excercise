#include<bits/Stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int numRows = matrix.size();
    int numCols = matrix[0].size();

    set<int> zeroRows;
    set<int> zeroCols;

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (matrix[i][j] == 0) {
                zeroRows.insert(i);
                zeroCols.insert(j);
            }
        }
    }

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (zeroRows.count(i) > 0 || zeroCols.count(j) > 0) {
                if (matrix[i][j] != 0) {
                    matrix[i][j] = -1;
                }
            }
        }
    }

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (matrix[i][j] == -1) {
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