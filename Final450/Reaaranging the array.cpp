#include <iostream>
#include <stack>
using namespace std;
void gun(int *a, int n)
{
    stack<int> v, w;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] >= 0)
        {
            v.push(a[i]);
        }
        else
        {
            w.push(a[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (w.size() == 0)
            {
                a[i] = v.top();
                cout << a[i];
                v.pop();
            }
            else
            {
                a[i] = w.top();
                cout << a[i];
                w.pop();
            }
        }
        else
        {
            if (v.size() == 0)
            {
                a[i] = w.top();
                cout << a[i];
                w.pop();
            }
            else
            {
                a[i] = v.top();
                cout << a[i];
                v.pop();
            }
        }
    }
}
main()
{
    int a[3000], n;
    cout << "HOw many elements do u want to enter:";
    cin >> n;
    cout << "Enter the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    gun(a, n);
    cout << "output2:";
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << "\t";
    }
}
