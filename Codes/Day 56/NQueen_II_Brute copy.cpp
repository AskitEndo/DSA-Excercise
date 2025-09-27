// given N Count all possible configurations of N queens in N*N chess board such that no two queens can attack each other
// https://leetcode.com/problems/n-queens/

#include <bits/stdc++.h>
using namespace std;

void BacktrackBoard(vector<vector<string>> &res,
                    vector<string> &board,
                    vector<bool> &cols,
                    vector<bool> &diag1,
                    vector<bool> &diag2,
                    int row, int n)
{

    if (row == n)
    {
        res.push_back(board);
        return;
    }

    for (int col = 0; col < n; ++col)
    {
        int d1 = row - col + n + 1;
        int d2 = row + col;

        if (cols[col] || diag1[d1] || diag2[d2])
            continue;

        board[row][col] = 'Q';
        cols[col] = diag1[d1] = diag2[d2] = true;

        BacktrackBoard(res, board, cols, diag1, diag2, row + 1, n);

        board[row][col] = '.';
        cols[col] = diag1[d1] = diag2[d2] = false;
    }
}

int totalNQueens(int n)
{
    vector<vector<string>> res;
    vector<string> board(n, string(n, '.'));
    vector<bool> cols(n, false);
    vector<bool> diag1((2 * n - 1), false);
    vector<bool> diag2((2 * n - 1), false);
    BacktrackBoard(res, board, cols, diag1, diag2, 0, n);
    return res.size();
}

int main()
{
    int n = 4;
    int solutions = totalNQueens(n);
    cout << "Total solutions for " << n << " queens: " << solutions << endl;
    return 0;
}
