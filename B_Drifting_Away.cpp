/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-14
 * Time : 20:47:14
 * Problem Name : B_Drifting_Away
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
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

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == '*' && s[i + 1] == '*')
        {
            cout << -1 << endl;
            return;
        }
        if (s[i] == '*' && s[i + 1] == '<')
        {
            cout << -1 << endl;
            return;
        }
        if (s[i] == '>' && s[i + 1] == '*')
        {
            cout << -1 << endl;
            return;
        }
        if (s[i] == '>' && s[i + 1] == '<')
        {
            cout << -1 << endl;
            return;
        }
    }
    int mx = 0;
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<' || s[i] == '*')
        {
            ++c;
            mx = max(c, mx);
        }
        else
        {
            c = 0;
        }
    }
    c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '>' || s[i] == '*')
        {
            ++c;
            mx = max(c, mx);
        }
        else
        {
            c = 0;
        }
    }

    cout << mx << endl;
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