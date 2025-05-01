/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-05-2025
 * time : 11:17:38
 * Problem Name : B_Stand_up_Comedian
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
    ll a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    if (a1 == 0)
    {
        if (a2 + a3 + a4 != 0)
        {
            cout << 1 << endl;
            return;
        }
        cout << 0 << endl;
        return;
    }
    ll ans = 0;
    ans += a1;
    ll k = min(a2, a3);
    ans += (k * 2);
    ll y = a4 + (a2 - k) + (a3 - k);
    if (y > a1)
    {
        ans+=a1;
        ++ans;
    }
    else{
        ans += y;
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