#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == '+' || s[2]=='+')
        {
            ++cnt;
        }
        else
        {
            --cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}