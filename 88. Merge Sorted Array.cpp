#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
    {
        nums1.erase(remove(nums1.begin() + m, nums1.end(), 0), nums1.end());
        for (int i = 0; i < n; i++)
        {

            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());

        return nums1;
    }
};
