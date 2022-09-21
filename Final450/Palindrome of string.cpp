#include <bits/stdc++.h>
using namespace std;
int isPalindrome(string S)
{
    // Your code goes here
    int j = (S.size() - 1);
    for (int i = 0; i < S.size(); i++)
    {

        if (i <= j)
        {
            if (S[i] != S[j])
            {
                return 0;
            }
            j--;
        }
    }
    return 1;
}

