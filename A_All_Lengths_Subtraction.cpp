/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-17
 * Time : 20:52:02
 * Problem Name : A_All_Lengths_Subtraction
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
#define rsort(a) sort(a.rbegin(), a.rend());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n;
    cin >> n;
    vec v(n);
    ll l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == n)
            l = i, r = i;
    }
    ll x = n - 1;

    ll cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (l != 0 && v[l - 1] == x)
        {
            l -= 1;
            ++cnt;
            --x;
        }
        else if (r != (n - 1) && v[r + 1] == x)
        {
            r += 1;
            ++cnt;
            --x;
        }
    }
    if (cnt == n)
        cout << "YES\n";
    else
    {
        cout << "NO\n";
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