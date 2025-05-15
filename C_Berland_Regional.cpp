/**
 *
 * Author : Md.Ariful Islam
 * Date : 15-05-2025
 * time : 23:39:49
 * Problem Name : C_Berland_Regional
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
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
    ll n;
    cin >> n;
    vec u(n), s(n);
    for (ll i = 0; i < n; i++)
        cin >> u[i];
    for (ll i = 0; i < n; i++)
        cin >> s[i];

    vector<ll> uni[n + 2];

    for (ll i = 0; i < n; i++)
    {
        uni[u[i]].push_back(s[i]);
    }

    for (ll i = 1; i <= n; i++)
    {
        sort(uni[i].rbegin(), uni[i].rend());
        for (ll j = 1; j < uni[i].size(); j++)
        {
            uni[i][j] += uni[i][j - 1];
        }
    }

    vector<ll> res(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        ll sz = uni[i].size();
        for (ll k = 1; k <= sz; k++)
        {
            ll full_teams = sz / k;
            res[k] += uni[i][full_teams * k - 1];
        }
    }

    for (ll k = 1; k <= n; k++)
    {
        cout << res[k] << " ";
    }
    cout << "\n";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

