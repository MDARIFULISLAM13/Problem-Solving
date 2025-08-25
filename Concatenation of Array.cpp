#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> a;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                a.push_back(nums[j]);
            }
        }
        return a;
    }
};
