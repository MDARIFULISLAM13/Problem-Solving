/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-04-2025
 * time : 01:27:59
 * Problem Name : C_Perfect_Team
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
#define mem(dp, i) memset(dp, i, sizeof(dp));
void solve()
{
    ll c, m, x;
    cin >> c >> m >> x;
    ll ans = min(c, m);
    ll ex = (max(c, m) - min(c, m)) + x;
    if (ex >= ans)
    {
        cout << ans << endl;
    }
    else
    {
        cout << (c + m + x) / 3 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}