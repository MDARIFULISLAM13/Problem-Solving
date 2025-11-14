/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-14
 * Time : 20:59:43
 * Problem Name : C_Range_Operation
 *
 **/
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
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    int n;
    cin >> n;
    vec a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    vec pre(n + 1, 0);
    for (int i = 1; i <= n; ++i)
        pre[i] = pre[i - 1] + a[i];

    ll mx = LLONG_MIN;
    ll mn = LLONG_MAX;

    for (int r = 1; r <= n; ++r)
    {
        ll br = 1LL * r * r - 1LL * r - pre[r - 1];
        if (br < mn)
            mn = br;

        ll ar = 1LL * r * r + 1LL * r - pre[r];
        ll x = ar - mn;
        if (x > mx)
            mx = x;
    }

    ll sum = pre[n];
    if (mx < 0)
        mx = 0;
    cout << sum + mx << '\n';
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