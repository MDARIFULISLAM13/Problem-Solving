#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        string a = haystack;
        string b = needle;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[0])
            {
                int index = i;
                int count = 0;
                for (int k = 0; k < b.size(); k++)
                {
                    if (a[i] == b[k])
                    {
                        i++;
                        count++;
                    }
                    else
                    {
                        i = i - count + 1;
                        break;
                    }
                    +if (k == (b.size() - 1))
                    {
                        return index;
                    }
                }
            }
        }
        return -1;
    }
};