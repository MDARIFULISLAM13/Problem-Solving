/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-08-2025
 * time : 23:23:16
 * Problem Name : A_Redstone
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
    map<ll, bool> mp;
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        if (mp[v] == false)
        {
            mp[v] = true;
        }
        else
        {
            f = true;
        }
    }
    if (f)
        yes
    else
        no
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