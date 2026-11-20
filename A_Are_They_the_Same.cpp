/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-07
 * Time : 20:40:04
 * Problem Name : A_Are_They_the_Same
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0 || (2 * x + k) % 2 == 0)
        {
            ++even;
        }
        if (x % 2 != 0 || (2 * x + k) % 2 != 0)
        {
            ++odd;
        }
    }

    ll odd1 = 0, even1 = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            ++even1;
        }
        if (x % 2 != 0)
        {
            ++odd1;
        }
    }
    if(odd>=odd1 && even>=even1)yes else no
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