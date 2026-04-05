

/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-04
 * Time : 20:39:22
 * Problem Name : B_The_67_th_6_7_Integer_Problem
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
    ll n = 7;
    vec v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }
    sort(v);
    for (int i = 0; i < 6; i++)
    {
        v[i] *= -1;
    }
    ll sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += v[i];
    }
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