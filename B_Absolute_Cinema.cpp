/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-23
 * Time : 20:52:28
 * Problem Name : B_Absolute_Cinema
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
    vec v(n), vv(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        cin >> vv[i];
        if (v[i] > vv[i])
            swap(v[i], vv[i]);
        sum += vv[i];
    }
    sort(v);
    sum += v[n - 1];
    cout << sum << endl;
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