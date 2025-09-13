/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-13
 * Time : 20:44:45
 * Problem Name : C_Pacer
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
#define rsort(a) sort(a.rbegin(), a.rend());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    ll cr = 0, s = 0;
    while (n--)
    {
        ll x, ss;
        cin >> x >> ss;
        ll d = x - cr;
        cr = x;
        if (d % 2 == 0)
        {
            if (s == ss)
            {
                ans += d;
            }
            else
            {
                ans += (d - 1);
            }
        }
        else
        {
            if (s == ss)
            {
                ans += (d - 1);
            }
            else
            {
                ans += (d);
            }
        }
        s = ss;
    }
    if (m != cr)
    {
        ll d = m - cr;
        ans += d;
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