/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-21
 * Time : 21:15:13
 * Problem Name : C_Red_Black_Pairs
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
    ll n;
    cin >> n;
    string s, ss;
    cin >> s >> ss;

    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == ss[i])
        {
            s[i] = '#';
            ss[i] = '#';
            ++cnt;

        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (i + 1 < s.size() && s[i] == s[i + 1] && s[i] != '#')
        {

           

            s[i] = '#';
            s[i + 1] = '#';
            i += 1;
            ++cnt;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < ss.size() && ss[i] == ss[i + 1] && ss[i] != '#')
        {
            ss[i] = '#';
          

            ss[i + 1] = '#';
            i += 1;
            ++cnt;
        }
    }

    cout <<n-cnt  << endl;
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