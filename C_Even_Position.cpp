#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ye cout << "YES\n";
#define no cout << "NO\n";
#define f(i, n) for (int i = 0; i < n; i++)
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> s;
        n = s.length();
        int i, f = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1] && f == 0)
            {
                cout << s[i];
                char ch;
                if (s[i] == 122)
                    ch = s[i] - 1;
                else
                    ch = s[i] + 1;
                cout << ch;
                f = 1;
            }
            else
                cout << s[i];
        }
        if (f == 1)
            cout << s[n - 1] << endl;
        else
        {
            cout << s[n - 1];
            i = n - 1;
            char ch;
            if (s[i] == 122)
                ch = s[i] - 1;
            else
                ch = s[i] + 1;
            cout << ch;
            cout << endl;
        }
    }
}