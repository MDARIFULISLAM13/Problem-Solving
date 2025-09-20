/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-20
 * Time : 20:37:56
 * Problem Name : A_Shortest_Increasing_Path
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
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (y == 1)
    {
        cout << -1 << endl;
        return;
    }
    if (x < y)
    {
        cout << 2 << endl;
        return;
    }
    else if (x == y)
    {
        cout << -1 << endl;
        return;
    }
    else if ((1 + y + 1 > x))
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        cout << 3 << endl;
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
