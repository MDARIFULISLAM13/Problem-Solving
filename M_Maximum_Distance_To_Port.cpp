/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-02-13
 * Time : 16:24:45
 * Problem Name : M_Maximum_Distance_To_Port
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
bool vis[mx];
ll dis[mx];

void bfs(int x)
{
    queue<int> q;
    q.push(x);
    vis[x] = 1;
    dis[x] = 0;

    while (!q.empty())
    {
        int cur_v = q.front();

        q.pop();
        for (int child : g[cur_v])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                dis[child] = dis[cur_v] + 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;

    vec v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= m; i++)
    {
        ll u, v;
        cin >> u >> v;
        g[v].push_back(u);
        g[u].push_back(v);
    }

    bfs(1);

    vec ans(k + 1);
    for (int i = 0; i < n; i++)
    {
        ll node=i+1;
        ll x = dis[node];
        ll pr = v[i];
        ans[pr] = max(ans[pr], x);

        
    }

    for(int i=1;i<=k;i++){
        cout << ans[i] << " ";
    }

    return 0;
}