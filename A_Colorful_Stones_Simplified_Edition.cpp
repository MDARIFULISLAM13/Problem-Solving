#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int count = 1;
    int j = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == s[j])
        {
            count++;
            j++;
        }
        if (j == s.size())
        {
            break;
        }
    }
    cout << count;
}