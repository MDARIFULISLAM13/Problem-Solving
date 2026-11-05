/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-10-28
 * Time : 19:34:35
 * Problem Name : L_New_Houses
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
    ll n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int>>> v;
    ll ans = 0;
    ll cnt = 0;
    ll ngx = 0, ngy = 0, ngc = 0;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (n == 1)
        {
            cout << y << endl;
            return;
        }
        if (x >= y)
        {
            ans += x;
            ngx = x, ngy = y;
            ++ngc;
            ++cnt;
        }
        else if (n == m)
        {
            ans += x;
            ++cnt;
        }
        else
        {
            ll z = y - x;
            v.push_back({z, {x, y}});
        }
    }
    if (cnt == n)
    {
        cout << ans << endl;
        return;
    }
    m -= cnt;
    n -= cnt;
    ll hp = 0;
    if (n + 1 <= m)
    {
        hp++;
        ++n;
    }
    if (n + 1 <= m)
    {
        hp++;
        ++n;
    }
    hp += ((m - n) / 2);

    sort(v);
    rev(v);
    for (int i = 0; i < v.size(); i++)
    {
        auto z = v[i];
        ll x = z.second.first;
        ll y = z.second.second;

        if (i < hp)
        {
            ans += y;
        }
        else
        {
            ngx = x, ngy = y;
            ++ngc;
            ans += x;
        }
    }
    if (ngc == 1)
    {
        ans -= ngx;
        ans += ngy;
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