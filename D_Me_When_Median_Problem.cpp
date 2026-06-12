/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-23
 * Time : 22:00:23
 * Problem Name : D_Me_When_Median_Problem
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
    vec a(n), b(n), v(n), s(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        v[i] = min(a[i], b[i]);
        s[i] = v[i];
    }
    s.push_back(0);
    sort(s);
    ll x = s[n];
    ll y = s[n - 1];

    vec aa, bb;
    ll v1 = 0, v2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x || v[i] == y)
        {
            aa.push_back(v1);
            bb.push_back(v2);
            aa.push_back(a[i]);
            bb.push_back(b[i]);
        }
        else if (i + n != n && (v[i + 1] == x || v[i + 1] == y))
        {
            aa.push_back(a[i]);
            bb.push_back(b[i]);
            aa.push_back(a[i+1]);
            bb.push_back(b[i+1]);
        }
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