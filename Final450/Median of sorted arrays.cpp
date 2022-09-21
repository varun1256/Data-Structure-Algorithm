#include <bits/stdc++.h>
using namespace std;
int find_median(vector<int> v)
{
	// Code here.
	sort(v.begin(), v.end());
	int n = v.size();
	if (n % 2 == 1)
	{
		int pos = n / 2;
		return v[pos];
	}
	else
	{
		int pos = n / 2;
		int pos2 = pos - 1;
		int ans = (v[pos] + v[pos2]) * 0.5;
		return ans;
	}
}