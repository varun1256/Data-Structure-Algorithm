#include <bits/stdc++.h>
using namespace std;
bool compare(string s1, string s2, string s3)
{
    if ((s3.size()) != (s1.size() + s2.size()))
    {
        return false;
    }
    unordered_map<int, int> mp;
    unordered_map<int, int> mp2;

    for (int i = 0; i < s1.size(); i++)
    {
        mp[s1[i]] = mp[s1[i]] + 1;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        mp[s2[i]] = mp[s2[i]] + 1;
    }
    for (int i = 0; i < s3.size(); i++)
    {
        mp2[s3[i]] = mp2[s3[i]] + 1;
    }
    unordered_map<int, int>::iterator it = mp.begin();

    while (it != mp.end())
    {
        if (mp2[it->first] == it->second)
        {
        }
        else
        {
            return false;
        }
        it++;
    }
    return true;
}
int main()
{
    string s1 = "ABC";
    string s2 = "123";
    string s3 = "A1B2C3";

    if (compare(s1, s2, s3))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}
