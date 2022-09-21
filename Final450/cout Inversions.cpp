#include <bits/stdc++.h>
using namespace std;
long long int inversionCount(long long arr[], long long N)
{
    long long int count = 0;
    long long k = INT_MAX;
    long long m = INT_MIN;
    // Your Code Here
    for (long long i = N - 1; i > 0; i--)
    {
        k = min(arr[i], k);
        m = max(arr[i], m);
        if (arr[i - 1] > m)
        {
            count += N - i;
        }

        else if (arr[i - 1] > k)
        {
            for (long long j = i; j < N; j++)
            {
                if (arr[i - 1] > arr[j])
                {
                    count++;
                }
            }
        }
    }
    return count;
}