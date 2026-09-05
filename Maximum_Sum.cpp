/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-02
 * Time : 20:33:39
 * Problem Name : Maximum_Sum
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
    vec v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {

        ll x = 0;
        for (int j = i; j <= i + (n - k) - 1   && j<=n; j++)
        {
            x += v[j];
        }
        ans = max(ans, x);
    }

    cout<<ans<<endl;
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