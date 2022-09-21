#include <bits/stdc++.h>
using namespace std;
string printSequence(string str[], string input)
{
    unordered_map<char, string> mp;
    int a = 65;
    for (int i = 0; i < 26; i++)
    {
        char b = a;
        mp[b] = str[i];
        cout << b << "\t" << mp[b] << "\n";
        a++;
    }
    string ans = "";
    for (int i = 0; i < input.size(); i++)
    {
        string d = mp[input[i]];
        ans = ans + d;
    }
    return ans;
}
int main()
{
    // storing the sequence in array
    string str[] = {"2", "22", "222", "3", "33", "333", "4",
                    "44", "444", "5", "55", "555", "6", "66",
                    "666", "7", "77", "777", "7777", "8", "88",
                    "888", "9", "99", "999", "9999"};

    string input = "GEEKSFORGEEKS";
    cout << printSequence(str, input);
    return 0;
}
