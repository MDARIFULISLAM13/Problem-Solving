/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-08
 * Time : 21:12:17
 * Problem Name : Signs_of_Prefix_Sums
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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == '0')
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0' && s[i - 1] == '0')
        {
            cout << -1 << endl;
            return;
        }
    }

    ll ans = 1;

    for (int i = 0; i < n; i++)
    {

        if (i < n - 1)
        {
            if ((s[i] == '+' && s[i + 1] == '-') || (s[i] == '-' && s[i + 1] == '+'))
            {
                ans = max(ans, 2LL);
            }
        }
        if (i < n - 2)
        {
            string ss = s.substr(i, 3);
            if (ss == "--0" || ss == "++0")
            {
                ans = max(ans, 2LL);
            }
        }
        if (i < n - 3)
        {
            string ss = s.substr(i, 4);
            if (ss == "+--+" || ss == "-++-")
            {
                ans = max(ans, 3LL);
            }
        }
    }

    cout << ans << endl;
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