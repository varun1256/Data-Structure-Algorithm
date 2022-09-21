#include <bits/stdc++.h>
using namespace std;

// TLE and my solution
string checkPalindrome(int i, int j, string S, int &maxi)
{
    string ans;
    int b = 0;

    if (maxi > (j - i))
    {
        return "";
    }
    for (int k = i; k <= j; k++)
    {
        ans = ans + S[k]; // important
        b++;
    }
    while (i <= j)
    {
        if (S[i] != S[j])
        {
            return "";
        }

        i++;
        j--;
    }
    if (maxi < b)
    {
        maxi = b;
    }
    return ans;
}
string longestPalin(string S)
{
    // code here
    int maxi = INT_MIN;
    string ans;
    string anser;
    for (int i = 0; i < (S.size()); i++)
    {
        for (int j = i; j < S.size(); j++)
        {
            ans = checkPalindrome(i, j, S, maxi);
            if (ans.size() > 0)
            {
                anser = ans;
            }
        }
    }
    return anser;
}

// Best solution
void check_P(string &S, string &longP, int i, int j)
{
    while (j < S.size() && i >= 0)
    {
        if (S[i] != S[j])
            return;
        if ((j - i + 1) > longP.size())
            longP = S.substr(i, j - i + 1);
        j++;
        i--;
    }
}
string longestPalin(string S)
{
    // code here
    string longP;
    longP.push_back(S[0]);
    for (int i = 1; i < S.size(); i++)
    {
        if (S[i] == S[i - 1]) // for even size palindrome
        {
            check_P(S, longP, i - 1, i);
        }
        check_P(S, longP, i, i);
    }
    return longP;
}