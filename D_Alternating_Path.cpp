/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-03-16
 * Time : 21:27:05
 * Problem Name : D_Alternating_Path
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

const int mx = 2e5 + 123;
vector<int> g[mx];
ll cl[mx];
ll c0, c1;
bool ok = true;

void dfs(int u, int c)
{
    cl[u] = c;
    if (c == 0)
        c0++;
    else
        c1++;

    for (auto i : g[u])
    {
        if (cl[i] == -1)
        {
           
            dfs(i,  1-c);
        }
        else if (cl[i] == cl[u])
        {
            ok = false;
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        g[i].clear();
        cl[i] = -1;
    }

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (cl[i] == -1)
        {
            c0 = 0;
            c1 = 0;
            ok = true;

            dfs(i, 0);

            if (ok)
            {
                ans += max(c0, c1);
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