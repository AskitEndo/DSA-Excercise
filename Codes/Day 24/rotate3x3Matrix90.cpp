#include <bits/stdc++.h>
using namespace std;

void matrix90(int a[3][3], int b[3][3])
{
    b[0][0] = a[2][0];
    b[0][1] = a[1][0];
    b[0][2] = a[0][0];
    b[1][0] = a[2][1];
    b[1][1] = a[1][1];
    b[1][2] = a[0][1];
    b[2][0] = a[2][2];
    b[2][1] = a[1][2];
    b[2][2] = a[0][2];
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "After 90 degree" << endl;

    matrix90(arr, b);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
