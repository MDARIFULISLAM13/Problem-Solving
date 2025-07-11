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

    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    if (a > b)
    {
        ll c = a ^ 1;
        if (c == b)
        {
            cout << y << endl;
            return;
        }
      
        cout << -1 << endl;
        return;
    }
    ll ans = 0;
    while (a != b)
    {
        ll c = a ^ 1;
        if (c <= a)
        {
            ++a;
            ans += x;
            continue;
        }
        else
        {
            ans += min(x, y);
            ++a;
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
        solve();

    return 0;
}