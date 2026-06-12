/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-21
 * Time : 20:47:04
 * Problem Name : B_Another_Sorting_Problem
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

    vec v(n);
    vec a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        a[i] = v[i];
    }
    if (is_sorted(v.begin(), v.end()))
    {
        cout << "YES\n";
        return;
    }

    ll add = -1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            add = max(add,abs(v[i] - v[i - 1]));
            v[i] += add;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            a[i] += add;
        }
    }
    if (is_sorted(a.begin(), a.end()))
    {
        cout << "YES\n";
        return;
    }
    else no
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