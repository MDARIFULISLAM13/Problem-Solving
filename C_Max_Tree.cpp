/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-17
 * Time : 21:35:00
 * Problem Name : C_Max_Tree
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

vec adj[200005];
bool vis[200005];
vec topo;

void dfs(int u)
{
    vis[u] = true;
    for (int v : adj[u])
        if (!vis[v])
            dfs(v);
    topo.push_back(u);
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        adj[i].clear();
    topo.clear();
    fill(vis, vis + n + 1, false);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        ll x, y;
        cin >> u >> v >> x >> y;
        if (x > y)
            adj[u].push_back(v);
        else
            adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
        if (!vis[i])
            dfs(i);

    reverse(topo.begin(), topo.end());

    vec p(n + 1);
    ll val = n;
    for (int i : topo)
    {
        p[i] = val;
        --val;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << p[i] << " ";
    }

    cout << endl;
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