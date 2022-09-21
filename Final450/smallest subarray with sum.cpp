#include <bits/stdc++.h>
using namespace std;

int smallestSubWithSum(int arr[], int n, int x)
{
    int i = 0, j = 0;

    int sum = 0;
    int minL = n + 1;

    while (j < n)
    {
        sum += arr[j];

        while (sum > x)
        {
            minL = min(minL, j - i + 1);
            sum -= arr[i];
            i++;
        }

        j++;
    }
    return minL == n + 1 ? 0 : minL;
}