/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-06-2025
 * time : 21:27:45
 * Problem Name : C_Equal_Values
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
    int n;
    cin >> n;
    vec a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll cost = 1e18;

    for (int i = 0; i < n; i++)
    {
        ll left = a[i] * i;
        while (a[i] == a[i + 1])
            i++;

        ll r = n - (i + 1);
        r *= a[i];

        cost = min(cost, (left + r));
        
    }
    cout << cost << endl;
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