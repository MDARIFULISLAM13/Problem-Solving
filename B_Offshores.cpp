/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-02-08
 * Time : 15:20:55
 * Problem Name : B_Offshores
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
    ll n, x, y;
    cin >> n >> x >> y;
    ll cst = x - y;
    // cout << cst << endl;
    vec v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v);

    ll ans = v.back();

    ll mx = (v.back() % x) + (v.back() / x) * cst;
    for (int i = 0; i < n - 1; i++)
    {
     
        ll cr = v[i];
        ll ex = cr % x;
        cr -= ex;

        ll mn = cr / x;
        mn *= cst;
        cr -= mn;
        ans += cr;

        ll cmx = ex + mn;

        if (cmx > mx)
        {
            ans += (cmx - mx);
            mx = cmx;
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