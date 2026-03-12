/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-03-11
 * Time : 19:41:32
 * Problem Name : B_Heapify_1
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
    bool ok = true;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x == i)
            continue;
        if (x < i)
        {
            if (ok == false)
                continue;
            while (x < i)
            {
                x += x;
            }
            if (x != i)
            {
                ok = false;
            }
        }
        if (x > i)
        {
            if (ok == false)
                continue;
            ll v = i;
            while (v < x)
            {
                v += v;
            }
            if (v != x)
            {
                ok = false;
            }
        }
    }
    if(ok)yes else no
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