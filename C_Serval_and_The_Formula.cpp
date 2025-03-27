/**
 *
 * Author : Md.Ariful Islam
 * Date : 23-03-2025
 * time : 20:34:45
 * Problem Name : C_Serval_and_The_Formula
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
ll power(ll v)
{
    ll x = 1;
    while (x <= v)
    {
        x *= 2;
    }
    return x;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    if (n == m)
    {
        cout << "-1\n";
        return;
    }
    ll v = max(n, m);
    ll next2 = power(v);
    cout << next2 - v << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }

    return 0;
}