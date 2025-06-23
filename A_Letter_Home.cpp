/**
 *
 * Author : Md.Ariful Islam
 * Date : 18-06-2025
 * time : 02:11:29
 * Problem Name : A_Letter_Home
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
    ll s;
    cin >> s;
    vec v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    if (s <= v[0])
    {
        cout << abs(s - v.back()) << endl;
        return;
    }
    if (s >= v.back())
    {
        cout << abs(s - v[0]) << endl;
        return;
    }
    ll ans = abs(v[0] - v.back());

    ans += min(abs(s - v[0]), abs(s - v.back()));
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