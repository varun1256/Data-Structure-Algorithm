#include <bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m)
{
  // code
  sort(a.begin(), a.end());
  long long mini = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if ((i + m - 1) < n)
    {
      long long diff = a[i + m - 1] - a[i];
      mini = min(diff, mini);
    }
  }
  return mini;
}