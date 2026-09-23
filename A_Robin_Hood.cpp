/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-14
 * Time : 14:10:07
 * Problem Name : A_Robin_Hood
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
#define ft double
// #define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n;
    cin >> n;
    vec v(n + 1);
    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    if (n < 3)
    {
        cout << -1 << endl;
        return;
    }

    sort(v);
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += v[i];
    }
    ll md = n / 2;
    ++md;
    if (ft(sum) / ft((n + n)) > ft(v[md]))
    {
        cout << 0 << endl;
        return;
    }

    ll l = 0, h = 1e18;

    ll ans = h;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        ll x = sum + mid;

        if (ft(x) / ft((n + n)) > ft(v[md]))
        {
            // cout << x << endl;
            ans = min(ans, mid);
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
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