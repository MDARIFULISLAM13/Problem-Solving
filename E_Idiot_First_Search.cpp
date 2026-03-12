

/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-03-12
 * Time : 14:38:44
 * Problem Name : E_Idiot_First_Search
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
const int mx = 3e5 + 123;
vector<ll> g[mx];
ll cnt[mx];
const ll MOD = 1e9 + 7;
ll ans[mx];

void dfs(ll i)
{
    for (auto v : g[i])
    {
        dfs(v);
        cnt[i] += cnt[v];
    }
}
void d_ans(ll i, ll p)
{
    ans[i] = (ans[p] + (((cnt[i] - 1) * 2))+ 1) % MOD;
    for (auto v : g[i])
        d_ans(v, i);
}

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0; i <= n; i++)
        g[i].clear();

    for (ll i = 1; i <= n; i++)
    {
        ll u, v;
        cin >> u >> v;
        if (u == 0)
            continue;

        g[i].push_back(u);
        g[i].push_back(v);
    }
    for (ll i = 1; i <= n; i++)
        cnt[i] = 1;
    dfs(1);

    ans[0] = 0;
    d_ans(1, 0);
    for (ll i = 1; i <= n; i++)
        cout << ans[i] << " ";
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
