/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-11
 * Time : 23:51:09
 * Problem Name : D_Fun
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
    ll n, x;
    cin >> n >> x;
    ll ans = 0;
    for (int i = 1; i <= min(n, x); i++)
    {
        for (int j = 1; j <= min(n, x); j++)
        {
            ll c = x - (i + j);
            ll cc = (n - (i * j)) / (i + j);

            c = min(c, cc);
            if (c < 1)
            {
                break;
            }
            ans += c;
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