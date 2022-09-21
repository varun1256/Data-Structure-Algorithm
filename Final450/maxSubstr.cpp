#include <bits/stdc++.h>
using namespace std;
//My code ,Working well but more time consuming
int maxSubStr(string str, int n)
{
    int end = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == (n - 1))
        {
            return -1;
        }
        if (str[i] != str[i + 1])
        {
            int s = i;
            int e = i + 1;
            count++;
            while (s >= end && e < n && (str[s] != str[e]))
            {
                s--;
                e++;
            }
            if (s >= end)
            {
                return -1;
            }
            end = e;
            i = end - 1;
        }
    }
    return count;
}
//Original Code
int maxSubStr(string str, int n)
{

	// To store the count of 0s and 1s
	int count0 = 0, count1 = 0;

	// To store the count of maximum
	// substrings str can be divided into
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (str[i] == '0') {
			count0++;
		}
		else {
			count1++;
		}
		if (count0 == count1) {
			cnt++;
		}
	}

	// It is not possible to
	// split the string
	if (count0!=count1) {
		return -1;
	}

	return cnt;
}

int main()
{
    string str = "010101";
    int n = str.length();

    cout << maxSubStr(str, n);

    return 0;
}
