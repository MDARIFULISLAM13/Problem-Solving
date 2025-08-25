/**
 *
 * Author : Md.Ariful Islam
 * Date : 22-07-2025
 * time : 21:00:17
 * Problem Name : B_Left_and_Down
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
    ll a, b, k;
    cin >> a >> b >> k;

    ll w_k = __gcd(a, b);
    ll c = (a + k - 1) / k;
    ll d = (b + k - 1) / k;

    if (w_k >= max(c, d))
    {
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
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