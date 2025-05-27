/**
 *
 * Author : Md.Ariful Islam
 * Date : 19-05-2025
 * time : 08:30:25
 * Problem Name : B_Slice_to_Survive
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

    ll n, m;
    cin >> n >> m;
    ll N, M;
    N = n;
    M = m;
    ll a, b;
    cin >> a >> b;

    ll l1 = a - 1;
    ll l2 = n - a;
    ll r1 = b - 1;
    ll r2 = m - b;

    n -= max(l1, l2);

    ll ans1 = 1;
    while (n > 1)
    {
        n = (n + 1) / 2;
        ++ans1;
    }
    while (m > 1)
    {
        m = (m + 1) / 2;
        ++ans1;
    }
    n = N;
    m = M;
    m -= max(r1, r2);

    ll ans2 = 1;
    while (n > 1)
    {
        n = (n + 1) / 2;
        ++ans2;
    }
    while (m > 1)
    {
        m = (m + 1) / 2;
        ++ans2;
    }
    cout << min(ans1, ans2) << endl;
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
