/**
 *
 * Author : Md.Ariful Islam
 * Date : 13-04-2025
 * time : 22:04:26
 * Problem Name : B_Bobritto_Bandito
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
    ll n, m, l, r;
    cin >> n >> m >> l >> r;
    ll L = -l;
    ll R = min(m, L);
    ll RM = m - R;
    cout << -R << " " << RM << endl;

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