/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-03-11
 * Time : 19:37:40
 * Problem Name : A_Sieve_of_Erato_67_henes
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
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 67)
            ok = true;
    }
    if (ok)
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