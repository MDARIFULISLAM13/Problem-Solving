/**
 *
 * Author : Md.Ariful Islam
 * Date : 05-06-2025
 * time : 22:03:22
 * Problem Name : B_AND_Sequences
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

const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vec a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int cnt = a[0];
    for (int i = 1; i < n; i++)
        cnt &= a[i];

    if (mp[cnt] < 2)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = (1LL * mp[cnt] * (mp[cnt] - 1)) % mod;

    for (int i = 1; i <= n - 2; i++)
    {
        ans = (ans * i) % mod;
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
