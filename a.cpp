/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-30
 * Time : 17:45:56
 * Problem Name : a
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
    ll n;
    cin >> n;
    vec v(n), vv(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        cin >> vv[i];

    ll ans = 0;
    ll sa = 0;
    ll p = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            ans = max(ans, sa);
            sa = 0;
            p=0;
        }
        p += v[i];
        if (p < vv[i])
        {
            sa += abs(vv[i] - p);
            p = 0;
        }
        else
        {
            p -= vv[i];
        }
    }
    ans = max(ans, sa);
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