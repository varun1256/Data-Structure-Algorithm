#include <bits/stdc++.h>
using namespace std;
void rotate90Clockwise(int arr[][4])
{
    int bar[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            bar[i][j] = arr[i][j];
        }
    }
    int a = 0;
    int b = 0;
    for (int j = 0; j < 4; j++)
    {
        for (int i = 3; i >= 0; i--)
        {
            arr[a][b] = bar[i][j];
            b++;
        }
        b = 0;
        a++;
    }
}
void printMatrix(int arr[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}
int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    rotate90Clockwise(arr);
    printMatrix(arr);
    return 0;
}
