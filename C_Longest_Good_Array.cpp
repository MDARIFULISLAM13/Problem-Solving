/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-06-2025
 * time : 21:34:13
 * Problem Name : C_Longest_Good_Array
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
    ll l, r;
    cin >> l >> r;
    ll ans = 0;

    ll cnt = 1;
    for (int i = l; i <= r;)
    {
        ++ans;
        i += cnt;
        ++cnt;
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
        solve();

    return 0;
}