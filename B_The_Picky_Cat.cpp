/**
 *
 * Author : Md.Ariful Islam
 * Date : 12-05-2025
 * time : 00:10:31
 * Problem Name : B_The_Picky_Cat
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
#define mem(dp, i) memset(dp, i, sizeof(dp));
void solve()
{

    ll n;
    cin >> n;
    int cnt = 1;
    ll v;
    cin >> v;
    for (int i = 1; i < n; i++)
    {

        int x;
        cin >> x;
        if (abs(x) >= abs(v))
        {
            ++cnt;
        }
    }
    ++n;
    if (cnt >= (n / 2))
    {
        yes;
    }

    else
    {
        no
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}