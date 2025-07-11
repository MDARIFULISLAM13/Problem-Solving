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
    int px, py, qx, qy;
    cin >> px >> py >> qx >> qy;
    vec a(n);
    ll t = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        t += a[i];
    }

    ll dx = abs(px - qx);
    ll dy = abs(py - qy);
    du dict = sqrt(dx * dx + dy * dy);

    if (dx == 0 && dy == 0)
    {
        if (t & 1)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
    else
    {
        if (t >= dict - 1e-9)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
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