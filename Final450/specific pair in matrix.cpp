#include <bits/stdc++.h>
using namespace std;
int findMaxValue(int mat[][5])
{
    int maxi = INT_MIN;
    int mxi = INT_MIN;
    int c, d;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (maxi < mat[i][j])
            {
                maxi = mat[i][j];
                c = i;
                d = j;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (c > i && d > j)
            {
                int diff = mat[c][d] - mat[i][j];
                if (mxi < diff)
                {
                    mxi = diff;
                }
            }
        }
    }
    return mxi;
}
int main()
{
    int mat[5][5] = {
        {1, 2, -1, -4, -20},
        {-8, -3, 4, 2, 1},
        {3, 8, 6, 1, 3},
        {-4, -1, 1, 7, -6},
        {0, -4, 10, -5, 1}};
    cout << "Maximum Value is "
         << findMaxValue(mat);

    return 0;
}
