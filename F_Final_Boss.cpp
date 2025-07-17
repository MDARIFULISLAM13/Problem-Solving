/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-07-2025
 * time : 07:24:15
 * Problem Name : F_Final_Boss
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
    ll h, n;
    cin >> h >> n;
    ll sum = 0;
    vec a(n);
    vec b(n);
    priority_queue<tuple<ll, ll, ll>, vector<tuple<ll, ll, ll>>, greater<>> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        pq.push({b[i], a[i], b[i]});
    }

    if (sum >= h)
    {
        cout << 1 << endl;
        return;
    }
    ll ans = 1;
    h -= sum;
   // cout << h << endl;
    while (h > 0)
    {
        auto [a, b, c] = pq.top();
        pq.pop();
        h -= b;
        ans = max(ans, a);
      //  cout << a << " " << b << " " << c << " " << h << endl;
        pq.push({a + c, b, c});
    }

    cout << ans+1 << endl;
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