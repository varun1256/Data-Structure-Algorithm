#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long int factorial(int N)
    {
        // code here
        long long int m = 1;
        for (int i = 1; i <= N; i++)
        {
            m = m * i;
        }
        return m;
    }
};