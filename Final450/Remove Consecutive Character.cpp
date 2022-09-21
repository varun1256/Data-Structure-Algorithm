#include <bits/stdc++.h>
using namespace std;
string removeConsecutiveCharacter(string S)
{
    // code here.
    string B = "";
    stack<char> v;
    for (int i = (S.size() - 1); i >= 0; i--)
    {
        if (S[i] == S[i - 1])
        {
        }
        else
        {
            v.push(S[i]);
        }
    }
    while (!v.empty())
    {
        B = B + v.top();
        v.pop();
    }

    return B;
}