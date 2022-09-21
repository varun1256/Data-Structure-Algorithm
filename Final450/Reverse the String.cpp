#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char> &s)
{
    stack<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        v.push(s[i]);
    }
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = v.top();
        v.pop();
    }
}