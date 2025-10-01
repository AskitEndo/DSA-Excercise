// a rat placed at position (0, 0)  to reach the destination at position (n-1, n-1).
// https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

#include <bits/stdc++.h>
using namespace std;

void possiblePaths(vector<vector<int>> &maze,
                   string &currPath,
                   vector<string> &allPaths,
                   int n, int row, int col)
{
    if (row < 0 || row >= n || col < 0 || col >= n || maze[row][col] == 0)
        return;

    if (maze[row][col] == 2)
        return;

    if (row == n - 1 && col == n - 1)
    {
        allPaths.push_back(currPath);
        return;
    }

    maze[row][col] = 2;

    int rowDir[] = {-1, 1, 0, 0};
    int colDir[] = {0, 0, -1, 1};
    char step[] = {'U', 'D', 'L', 'R'};

    for (int i = 0; i < 4; i++)
    {
        int newRow = row + rowDir[i];
        int newCol = col + colDir[i];

        currPath.push_back(step[i]);
        possiblePaths(maze, currPath, allPaths, n, newRow, newCol);
        currPath.pop_back();
    }
    maze[row][col] = 1;
}

vector<string> ratInMaze(vector<vector<int>> &maze)
{
    string currPath;
    vector<string> allPaths;
    int n = maze.size();

    if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
        return {};

    possiblePaths(maze, currPath, allPaths, n, 0, 0);

    sort(allPaths.begin(), allPaths.end());

    return allPaths;
}

int main()
{
    vector<vector<int>> maze = {{1, 0, 0, 0},
                                {1, 1, 0, 1},
                                {1, 1, 0, 0},
                                {0, 1, 1, 1}};
    vector<string> paths = ratInMaze(maze);
    for (const string &path : paths)
    {
        cout << path << endl;
    }
    return 0;
}