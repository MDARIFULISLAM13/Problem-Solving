/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-06-2025
 * time : 01:45:30
 * Problem Name : A_Shashliks
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
void solve()
{
    ll k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    if (x > y)
    {
        swap(x, y);
        swap(a, b);
    }
    if (x == y && a < b)
    {
        swap(a, b);
    }

    ll ans = 0;
    if (k >= a)
    {
        ll n = abs(k - a);
        k -= n;
        k += (n % x);
        ans += (n / x);
        k -= x;
        ++ans;
    }
    if (k >= b)
    {
        ll n = abs(k - b);
        k -= n;
        k += (n % y);
        ans += (n / y);
        ++ans;
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