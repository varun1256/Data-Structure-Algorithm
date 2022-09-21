#include <bits/stdc++.h>
using namespace std;
void morethanNbyK(int arr[], int n, int k)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]] = mp[arr[i]] + 1;
    }
    int times = n / k;
    unordered_map<int, int>::iterator it = mp.begin();
    while (it != mp.end())
    {
        if ((it->second) > times)
        {
            cout << it->first << "\t";
        }
        it++;
    }
}
int main()
{
    int arr[3000];
    int n;
    cout << "Enter the no of elements:";
    cin >> n;
    cout << "Enter the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k = 4;

    morethanNbyK(arr, n, k);

    return 0;
}
