#include <bits/stdc++.h>
using namespace std;
bool check_rotation(string s, string goal)
{   //incomplete solution
    if (s.size() != goal.size())
    {
        return false;
    }
    char c = goal[0];
    int k = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (c == s[i])
        {
            k = i;
            break;
        }
    }
    if (k == -1)
    {
        return false;
    }
    k++;
    for (int i = 1; i < goal.size(); i++)
    {
        if (k >= s.size())
        {
            k = 0;
        }
        if (s[k] != goal[i])
        {
            return false;
        }
        k++;
    }
    return true;

    // Solution 2 considering edge cases

    if (s.size() != goal.size())
        return false;
    queue<char> q1;
    for (int i = 0; i < s.size(); i++)
    {
        q1.push(s[i]);
    }
    queue<char> q2;
    for (int i = 0; i < goal.size(); i++)
    {
        q2.push(goal[i]);
    }
    int k = goal.size();
    while (k--)
    {
        char ch = q2.front();
        q2.pop();
        q2.push(ch);
        if (q2 == q1)
            return true;
    }
    return false;
}
int main()
{
    string s1 = "ACBC";
    string s2 = "CACB";
    if (check_rotation(s1, s2))
        cout << s2 << " is a rotated form of " << s1
             << endl;
    else
        cout << s2 << " is not a rotated form of " << s1
             << endl;
    string s3 = "ACBD";
    if (check_rotation(s1, s3))
        cout << s3 << " is a rotated form of " << s1
             << endl;
    else
        cout << s3 << " is not a rotated form of " << s1
             << endl;
    return 0;
}
// CDAB
// ACBD
