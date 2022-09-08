#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        vector<int> v(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++)
        {
            v[i] = 0;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (v[nums.at(i)] == 1)
            {
                return nums[i];
            }
            v[nums.at(i)] = 1;
        }
        return 0;
    }
};