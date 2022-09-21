#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat)
{
    // code here
    int R1, C1, R2, C2;
    R1 = 0;
    C1 = N - 1;
    R2 = N - 1;
    C2 = 0;
    vector<vector<int>> a(N, vector<int>(N, 0));
    vector<int> v;
    while (R1 <= R2 || C2 <= C1)
    {
        if (C2 <= C1)
        {
            for (int i = C2; i <= C1; i++)
            {
                v.push_back(Mat[R1][i]);
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
                v.push_back(Mat[j][C1]);
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
                v.push_back(Mat[R2][i]);
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
                v.push_back(Mat[j][C2]);
            }

            C2++;
        }
        else
        {
            break;
        }
    }

    sort(v.begin(), v.end());
    stack<int> f;

    for (int i = (v.size() - 1); i >= 0; i--)
    {
        f.push(v[i]);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a[i][j] = f.top();
            f.pop();
        }
    }
    return a;
}