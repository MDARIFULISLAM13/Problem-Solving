/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-07-14
 * Time : 20:52:16
 * Problem Name : C_Stepan_and_Permutation
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

    ll z = __gcd(x,y);
    bool ok = true;

    for (ll i = 1; i <= n; i++)
    {
        ll v;
        cin >> v;
        ll c = abs(v - i);

        if (c % z != 0)
        {
            ok = false;
        }
    }

    if(ok) yes else no
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