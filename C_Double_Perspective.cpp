/**
 *
 * Author : Md.Ariful Islam
 * Date : 31-07-2025
 * time : 21:25:53
 * Problem Name : C_Double_Perspective
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

bool dfs(ll u, ll v, vector<vector<ll>> &g, vector<bool> &vis)
{
    if (u == v)
        return true;
    vis[u] = 1;
    for (ll x : g[u])
    {
        if (!vis[x] && dfs(x, v, g, vis))
            return true;
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> e;
    ll mx = 0;

    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        ll w = b - a;
        e.push_back({w, a, b, i + 1});
        mx = max({mx, a, b});
    }

    sort(e.begin(), e.end(), [&](auto &x, auto &y)
         { return x[0] > y[0]; });

    vector<vector<ll>> g(mx + 1);
    vector<ll> ans;

    for (auto &x : e)
    {
        ll w = x[0], a = x[1], b = x[2], id = x[3];
        vector<bool> vis(mx + 1, 0);

        if (dfs(a, b, g, vis))
            continue;
        g[a].push_back(b);
        g[b].push_back(a);
        ans.push_back(id);
    }

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
