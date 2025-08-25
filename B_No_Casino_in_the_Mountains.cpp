/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-07-2025
 * time : 20:39:03
 * Problem Name : B_No_Casino_in_the_Mountains
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
    vec v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = 0;
    ll pre = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            ++pre;
        }
        else if (v[i] == 1)
        {
            pre = 0;
        }
        if (pre == k)
        {
            ++ans;
            pre = 0;
            ++i;
        }
    }
    cout << ans << endl;
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