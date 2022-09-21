#include <bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    // code here
    int count;
    int maxi = INT_MIN;
    int pos;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxi)
        {
            maxi = count;
            pos = i;
        }
    }
    if (maxi == 0)
    {
        return -1;
    }
    return pos;
}