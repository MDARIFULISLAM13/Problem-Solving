#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int mx = 0;
        int count = 0;
        int v = 0;

        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                count++;
                if (count > mx)
                {
                    v = nums[i];
                }
                mx = max(mx, count);
            }
            else
            {
                count = 1;
            }
        }
        if (nums.size() == 1)
        {
            return nums[0];
        }
        return v;
    }
};