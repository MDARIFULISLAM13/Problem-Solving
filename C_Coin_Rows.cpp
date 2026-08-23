/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-23
 * Time : 21:52:13
 * Problem Name : C_Coin_Rows
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
    vec v(n + 1);
    vec vv(n + 1);
    vec pv(n + 2), pvv(n + 2);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
        cin >> vv[i];

    for (int i = n; i >= 1; i--)
    {
        pv[i] = pv[i + 1] + v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        pvv[i] = pvv[i - 1] + vv[i];
    }
    ll ans = 1e18;

    for (int i = 1; i <= n; i++)
    {
        ll ans1 = 0, ans2 = 0;
        ans1 = pv[i + 1];
        ans2 = pvv[i - 1];
        ans1 = max(ans1, ans2);
        ans = min(ans1, ans);
    }
    cout<<ans<<endl;
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