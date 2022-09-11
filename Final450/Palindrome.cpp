#include <bits/stdc++.h>
using namespace std;
int PalinArray(int a[], int n)
{ // code here
    for (int i = 0; i < n; i++)
    {
        int num = a[i];
        int arr[5];
        int count = 0;
        int k = 0;
        while (num != 0)
        {
            int rem = num % 10;
            arr[k] = rem;
            k++;
            num = num / 10;
        }
        int s = 0;
        int j = k - 1;
        while (s <= j)
        {
            if (arr[s] != arr[j])
            {
                return 0;
            }
            s++;
            j--;
        }
    }
    return 1;
}