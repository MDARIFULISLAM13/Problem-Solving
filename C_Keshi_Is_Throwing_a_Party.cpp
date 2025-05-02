/**
 *
 * Author : Md.Ariful Islam
 * Date : 02-05-2025
 * time : 17:20:30
 * Problem Name : C_Keshi_Is_Throwing_a_Party
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
ll n;
vector<pair<ll, ll>> v;

bool ok(ll mid)
{
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        
        if (v[i].first >= (mid - cnt - 1) && v[i].second >= cnt)
        {
            cnt++;
        }
    }
    return cnt >= mid;
}

void solve()
{

    cin >> n;
    v.clear();
    for (int i = 1; i <= n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    ll l = 0, h = n;
    ll ans = 0;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (ok(mid))
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            h = mid - 1;
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
    {
        solve();
    }

    return 0;
}