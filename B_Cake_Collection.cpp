/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-08
 * Time : 20:49:00
 * Problem Name : B_Cake_Collection
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
// #define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n, m;
    cin >> n >> m;
    vec v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    rsort(v);
    ll ans = 0;
    for (ll i = 0; i < min(n, m); ++i)
    {
        ans += v[i] * (m - i);
    }

    cout << ans << "\n";
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