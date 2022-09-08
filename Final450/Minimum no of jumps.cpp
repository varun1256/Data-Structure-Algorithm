#include<bits/stdc++.h>
 using namespace std;
class Solution
{
public:
    int ghl(int c, int arr[], int n, int count)
    {
        if (c >= n - 1)
        {
            return count;
        }
        int k = INT_MIN, index, t;
        index = c + arr[c];
        if (arr[c] == 0)
        {
            return -1;
        }
        for (int i = c + 1; i <= (c + arr[c]); i++)
        {
            if (k < arr[i] && arr[c] < arr[i])
            {
                t = arr[i];
                k = arr[i];
                index = i;
            }
        }
        c = index;

        count++;
        return ghl(c, arr, n, count);
    }
    int minJumps(int arr[], int n)
    {
        int c = 0;
        int count = 0;
        return ghl(c, arr, n, count);
    }
};
