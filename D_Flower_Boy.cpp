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
    ll n, m;
    cin >> n >> m;
    vec a(n + 1), b(m + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
    }

    ll pa = 1, pb = 1;
    vector<int> l(m + 1, -1);

    while (pa <= n && pb <= m)
    {
        if (a[pa] >= b[pb])
        {
            l[pb] = pa;
            pb++;
        }
        pa++;
    }

    if (pb > m)
    {
        cout << 0 << endl;
        return;
    }

    vector<int> r(m + 1, -1);
    pa = n;
    pb = m;

    while (pa >= 1 && pb >= 1)
    {
        if (a[pa] >= b[pb])
        {
            r[pb] = pa;
            pb--;
        }
        pa--;
    }

    ll ans = 1e18;
    if (m >= 2 && r[2] != -1)
        ans = b[1];
    if (m >= 2 && l[m - 1] != -1)
        ans = min(b[m], ans);

    for (ll i = 1, j = 3; j <= m; i++, j++)
    {
        if (l[i] != -1 && r[j] != -1 && l[i] < r[j])
            ans = min(ans, b[i + 1]);
    }

    if (ans == 1e18)
    {
        cout << -1 << endl;
        return;
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
