/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-10
 * Time : 02:05:55
 * Problem Name : F_Forever_Winter
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
#define sortv(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));
const int mx = 1000;

vector<ll> g[mx];
bool vis[mx];
ll last = -1;

void algo(int source)
{
    vis[source] = 1;
    bool ck = false;

    for (auto i : g[source])
    {
        if (!vis[i])
        {
            ck = true;
            algo(i);
        }
    }
    if (!ck && last == -1)
    {
        last = source;
    }
}

void solve()
{
    ll n, m;
    cin >> n >> m;

    for (int i = 0; i <= n; i++)
    {
        g[i].clear();
        vis[i] = false;
    }
    last = -1;

    ll ind = 1;
    for (int i = 0; i < m; i++) 
    {
        ll x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
        ind = x;
    }

    algo(ind);

    ll y = g[last].front();
    set<int> s;
    ll x = -1;

    for (auto i : g[y])
    {
        s.insert(i);
        if (g[i].size() != 1)
        {
            x = i;
        }
    }

    set<int> ss;
    for (auto i : g[x])
    {
        ss.insert(i);
    }

    cout << ss.size() << " " << s.size() - 1 << endl;
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
