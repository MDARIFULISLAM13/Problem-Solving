/**
 *
 * Author : Md.Ariful Islam
 * Date : 12-07-2025
 * time : 06:18:46
 * Problem Name : E_Romantic_Glasses
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
    vec v(n + 1);
    vec pre(n + 1);
    pre[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (i % 2 == 0)
        {
            v[i] *= -1;
        }
        pre[i] = pre[i - 1] + v[i];
    }
    sort(pre.begin(), pre.end());

    for (int i = 0; i < n; i++)
    {
        if (pre[i] == pre[i + 1])
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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