#include <bits/stdc++.h>
using namespace std;
bool areIsomorphic(string str1, string str2)
{ // Your code here
    unordered_map<char, char> mp;
    unordered_map<char, char> mp2;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1.length() != str2.length())
        {
            return false;
        }
        if (!mp[str1[i]])
        {
            if (mp2[str2[i]])
            {
                if (mp2[str2[i]] != str1[i])
                {
                    return false;
                }
            }
            mp[str1[i]] = str2[i];
            mp2[str2[i]] = str1[i];
        }
        else
        {
            if (mp[str1[i]] == str2[i])
            {
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}