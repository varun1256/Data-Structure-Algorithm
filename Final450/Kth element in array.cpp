#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int mat[][1000], int n, int k)
{
    // Your code here
    int R1, C1, R2, C2;
    R1 = 0;
    C1 = n - 1;
    R2 = n - 1;
    C2 = 0;
    vector<int> v;
    while (R1 <= R2 || C2 <= C1)
    {
        if (C2 <= C1)
        {
            for (int i = C2; i <= C1; i++)
            {
                v.push_back(mat[R1][i]);
            }
            R1++;
        }
        else
        {
            break;
        }
        if (R1 <= R2)
        {
            for (int j = R1; j <= R2; j++)
            {
                v.push_back(mat[j][C1]);
            }

            C1--;
        }
        else
        {
            break;
        }
        if (C1 >= C2)
        {
            for (int i = C1; i >= C2; i--)
            {
                v.push_back(mat[R2][i]);
            }

            R2--;
        }
        else
        {
            break;
        }
        if (R2 >= R1)
        {
            for (int j = R2; j >= R1; j--)
            {
                v.push_back(mat[j][C2]);
            }

            C2++;
        }
        else
        {
            break;
        }
    }
    sort(v.begin(), v.end());
    return v[k - 1];
}