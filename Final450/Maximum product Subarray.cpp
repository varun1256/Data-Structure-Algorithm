#include <bits/stdc++.h>
using namespace std;

long long maxProduct(vector<int> arr, int n)
{
	// code here
	long long curr = 1;
	long long maxi = INT_MIN;

	for (int i = 0; i < n; i++)
	{ // traverse from start
		curr = curr * arr[i];
		maxi = max(maxi, curr);

		if (arr[i] == 0)
			curr = 1;
	}

	curr = 1;
	for (int i = n - 1; i >= 0; i--)
	{ // traverse from backward
		curr = curr * arr[i];
		maxi = max(maxi, curr);

		if (arr[i] == 0)
			curr = 1;
	}

	return maxi;
}