#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        vector<int> a;
        vector<int> b;
        if (x < 0)
        {
            return false;
        }
        while (x > 0)
        {
            int y = x % 10;
            x /= 10;
            a.push_back(y);
            b.push_back(y);
        }
        reverse(a.begin(), a.end());
        for (int i = 0; i < b.size(); i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
        }
        return true;
    }
};

//arif