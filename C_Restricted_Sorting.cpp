/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-03-31
 * Time : 21:50:03
 * Problem Name : C_Restricted_Sorting
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

void solve()
{
    ll n;
    cin >> n;
    vec v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (is_sorted(v.begin(), v.end()))
    {
        cout << -1 << endl;
        return;
    }
    vec vv = v;
    sort(v);

    ll mn = v[0], mx = v[n - 1];

    ll ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (v[i] != vv[i])
        {

            ll x = abs(mn - v[i]);
            ll y = abs(mx - v[i]);
            y = max(x, y);
            ans = min(ans, y);
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