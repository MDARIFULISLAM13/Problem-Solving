/**
 *
 * Author : Md.Ariful Islam
 * Date : 28-04-2025
 * time : 23:51:53
 * Problem Name : A_Three_Decks
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
    ll a, b, c;
    cin >> a >> b >> c;
    c -= (b - a);
    a = b;

    if (c < a)
    {
        no;
        return;
    }
    if ((c - a) % 3 == 0)
    {
        yes;
        return;
    }
    no;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}