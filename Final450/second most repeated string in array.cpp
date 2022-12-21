#include <bits/stdc++.h>
using namespace std;

string secFrequent(string arr[], int n)
{
    // code here.
    vector<int> v;
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]] = mp[arr[i]] + 1;
    }
    unordered_map<string, int>::iterator it = mp.begin();
    while (it != mp.end())
    {
        v.push_back(it->second);
        it++;
    }
    sort(v.begin(), v.end());
    int len = v.size() - 1;
    int a = v[len];
    int k = INT_MAX;
    for (int i = len; i >= 0; i--)
    {
        if (v[i] != a)
        {
            k = v[i];
            break;
        }
    }
    string m = "";
    it = mp.begin();
    while (it != mp.end())
    {
        if ((it->second) == k)
        {
            m = it->first;
            break;
        }
        it++;
    }
    return m;
}