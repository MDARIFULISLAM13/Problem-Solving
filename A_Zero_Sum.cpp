/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-07-18
 * Time : 20:36:13
 * Problem Name : A_Zero_Sum
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
    ll a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        if (v > 0)
            ++a;
        else
            ++b;
    }

    ll x = min(a, b);
    a -= x;
    b -= x;
    x = max(a, b);
    if (x % 4 == 0 )
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