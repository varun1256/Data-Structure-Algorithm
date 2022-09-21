#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int pos = -1234;
    int flag = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        int n = matrix[i].size() - 1;
        if (target >= matrix[i][0] && target <= matrix[i][n])
        {
            pos = i;
        }
    }

    if (pos == -1234)
    {
        return false;
    }
    for (int j = 0; j < matrix[pos].size(); j++)
    {
        if (target == matrix[pos][j])
        {
            return true;
        }
    }
    return false;
}