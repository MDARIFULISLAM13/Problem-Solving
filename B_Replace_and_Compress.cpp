/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-10-16
 * Time : 13:27:06
 * Problem Name : B_Replace_and_Compress
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    string s;
    cin >> s;

    auto count = [](string s) -> string
    {
        string a = "";
        a += s[0];

        for (int i = 1; i < s.size(); i++)
        {
            if (a.back() != s[i])
                a += s[i];
        }

        return a;
    };
    set<string> ss;
    ss.insert(count(s));
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i - 1] == s[i + 1])
        {
            if (s[i] == '0')
            {
                s[i] = '1';
                ss.insert(count(s));
                s[i] = '0';
            }
            else
            {
                s[i] = '0';
                ss.insert(count(s));
                s[i] = '1';
            }

            while (s[i - 1] == s[i + 1])
                ++i;

            --i;
        }
    }

    cout << ss.size() << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}