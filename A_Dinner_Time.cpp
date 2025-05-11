/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-05-2025
 * time : 23:49:16
 * Problem Name : A_Dinner_Time
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
    ll n, m, p, q;
    cin >> n >> m >> p >> q;
    if (n % p == 0)
    {
        ll x = n / p;
        q *= x;
        if (q == m)
        {
            yes;
        }

        else
        {
            no;
        }
    }
    else
    {

      yes

    }
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