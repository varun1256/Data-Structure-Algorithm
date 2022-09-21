#include <bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;
#define NO_OF_CHARS 256

class gfg
{
public:
    void printDups(char *str)
    {
        unordered_map<char, int> mp;
        for (int i = 0; i < strlen(str); i++)
        {
            mp[str[i]] = mp[str[i]] + 1;
        }

        unordered_map<char, int>::iterator it = mp.begin();
        while (it != mp.end())
        {
            if (it->first != ' ')
            {
                if ((it->second) >= 2)
                {
                    cout << it->first << ","
                         << "count=" << it->second << "\n";
                }
            }
            it++;
        }
    }
};

int main()
{
    gfg g;
    char str[] = "test string of the";
    g.printDups(str);
    return 0;
}
