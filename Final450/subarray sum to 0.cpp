#include <bits/stdc++.h>
using namespace std;
bool subArrayExists(int arr[], int n)
{
    // Your code here
    unordered_map<int, int> mp;
    mp[0] = 1;
    int su = 0;
    for (int i = 0; i < n; i++)
    {
        su += arr[i];
        if (mp.find(su) != mp.end())
        {
            return true;
        }
        else
        {
            mp[su]++;
            cout << su << ":" << mp[su] << "hue";
        }
    }
    return false;
}