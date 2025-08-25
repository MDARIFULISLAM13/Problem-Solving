#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        vector<char> a;
        a.push_back('I');
        a.push_back('V');
        a.push_back('X');
        a.push_back('L');
        a.push_back('C');
        a.push_back('D');
        a.push_back('M');
        vector<int> b;

        b.push_back(1);
        b.push_back(5);
        b.push_back(10);
        b.push_back(50);
        b.push_back(100);
        b.push_back(500);
        b.push_back(1000);
        long long int sum = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] == 'I' && s[i + 1] == 'V') || (s[i] == 'I' && s[i + 1] == 'X'))
            {
                i++;
                sum -= 1;
            }
            if ((s[i] == 'X' && s[i + 1] == 'L') || (s[i] == 'X' && s[i + 1] == 'C'))
            {
                i++;
                sum -= 10;
            }
            if ((s[i] == 'C' && s[i + 1] == 'D') || (s[i] == 'C' && s[i + 1] == 'M'))
            {
                i++;
                sum -= 100;
            }

            auto it = find(a.begin(), a.end(), s[i]);
            int dis = distance(a.begin(), it);
            sum += b[dis];
        }
        return sum;
    }
};