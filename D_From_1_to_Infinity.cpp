/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-14
 * Time : 16:57:45
 * Problem Name : D_From_1_to_Infinity
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
#define rsort(a) sort(a.rbegin(), a.rend());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

ll dig_sum(ll n)
{
    // using ai
    ll res = 0, p = 1;
    while (p <= n)
    {
        ll higher = n / (p * 10);
        ll current = (n / p) % 10;
        ll lower = n % p;
        ll contrib = higher * 45 * p;
        if (current > 0)
        {
            contrib += (current * (current - 1) / 2) * p;
            contrib += current * (lower + 1);
        }
        res += contrib;
        p *= 10;
    }
    return res;
}

void solve()
{
    ll k;
    cin >> k;
    ll n = 0;
    ll c = 9, cc = 1;
    while (true)
    {
        ll dig = c * cc;
        if (dig > k)
            break;

        n = c + (c / 9) - 1;
        k -= dig;
        c *= 10;
        ++cc;
    }
    ll ex = k / cc;
    n += ex;
    ex = n;
    ++ex;
    ll ans = dig_sum(n);

    string s = to_string(ex);
    for (int i = 0; i < k % cc; i++)
    {
        ans += s[i] - '0';
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