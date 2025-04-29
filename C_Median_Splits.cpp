/**
 *
 * Author : Md.Ariful Islam
 * Date : 21-04-2025
 * time : 21:30:04
 * Problem Name : C_Median_Splits
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
    ll n, k;
    cin >> n >> k;

    ll a[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= k)
        {
            ++cnt;
        }
    }
    if (cnt < 2)
    {
        no;
        return;
    }
    int t = 0;
    vec v;
    int sub = 1;
    for (int i = 0; i < n; i++)
    {
        v.push_back(a[i]);
        sort()
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
    {
        solve();
    }

    return 0;
}