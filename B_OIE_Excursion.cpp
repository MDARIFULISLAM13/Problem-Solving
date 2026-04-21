/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-13
 * Time : 20:56:43
 * Problem Name : B_OIE_Excursion
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
    ll n, m;
    cin >> n >> m;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    set<ll> bad;

    for (int i = 0; i < n; i++)
    {
        ll x = (m - (v[i] + i + 1) % m) % m;
        bad.insert(x);
    }

    if ((ll)bad.size() < m)
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