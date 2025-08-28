/**
 *
 * Author : Md.Ariful Islam
 * Date : 28-08-2025
 * time : 22:00:01
 * Problem Name : D_For_the_Champion
 *
 **/

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>

void solve()
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> xy(n);
    for (int i = 0; i < n; i++)
        cin >> xy[i].first >> xy[i].second;

    ll a = LLONG_MIN, b = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        ll x = xy[i].first;
        ll y = xy[i].second;
        a = max(a, x + y);
        b = max(b, x - y);
    }

    ll k = 1e9, s;
    cout << "? D " << k << endl;
    cin >> s;
    if (s == -1)
        return;
    cout << "? U " << k << endl;
    cin >> s;
    if (s == -1)
        return;
    cout << "? R " << k << endl;
    cin >> s;
    if (s == -1)
        return;
    cout << "? R " << k << endl;
    cin >> s;
    if (s == -1)
        return;
    cout << "? U " << k << endl;
    cin >> s;
    if (s == -1)
        return;
    cout << "? U " << k << endl;
    ll u;
    cin >> u;
    if (u == -1)
        return;
    cout << "? D " << k << endl;
    cin >> s;
    if (s == -1)
        return;
    cout << "? D " << k << endl;
    cin >> s;
    if (s == -1)
        return;
    cout << "? D " << k << endl;
    cin >> s;
    if (s == -1)
        return;
    cout << "? D " << k << endl;
    ll d;
    cin >> d;
    if (d == -1)
        return;

    ll s1 = u - 4LL * k + a;
    ll s2 = d - 4LL * k + b;

    ll x = (s1 - s2) / 2;
    ll y = (s1 + s2) / 2;

    cout << "! " << y << " " << x << endl;

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