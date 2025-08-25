#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int x = target - nums[i];
            auto it = find(nums.begin(), nums.end(), x);
            if (it != nums.end() && it - nums.begin() != i)
            {
                int y = distance(nums.begin(), it);
                return {i, y};
            }
        }

        return {};
    }
};
