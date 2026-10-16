/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-10-16
 * Time : 14:13:19
 * Problem Name : C_Subarrays
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n, k;
    cin >> n >> k;

    vec v(n + 1, 0);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vec pre(n + 1, 0);

    for (int i = 1; i <= n; i++)
        pre[i] = (pre[i - 1] + v[i]) % k;

    vec px(k, 0);
    ll cnt = 0;
    ll ans = 0;
    for (auto i = k + 1; i <= n; i++)
    {

        px[pre[cnt]]++;
        ++cnt;

        ans += px[pre[i]];
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