/**
 *
 * Author : Md.Ariful Islam
 * Date : 28-08-2025
 * time : 20:44:44
 * Problem Name : A_In_the_Dream
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

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    auto ok = [](ll x, ll y)
    { return max(x, y) <= 2 * min(x, y) + 2; };

    if (ok(a, b) && ok(c - a, d - b))
        yes else no
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