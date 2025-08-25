/**
 *
 * Author : Md.Ariful Islam
 * Date : 31-07-2025
 * time : 22:04:58
 * Problem Name : D_Stay_or_Mirror
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
#define mem(dp,i) memset(dp,i,sizeof(dp));

void solve()
{
    ll n;
    cin >> n;
    vec p(n);
    for (ll i = 0; i < n; i++)
        cin >> p[i];


    ll invp = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if (p[j] < p[i])
                invp++;
        }
    }

   
    ll sum_neg = 0;
    for (ll i = 0; i < n; i++)
    {
        ll invr = 0, gl = 0;
        for (ll j = i + 1; j < n; j++)
            if (p[j] < p[i])
                invr++;
        for (ll j = 0; j < i; j++)
            if (p[j] > p[i])
                gl++;
        ll D = (n - 1 - i) - invr - gl;
        if (D < 0)
            sum_neg += D;
    }

    ll ans = invp + sum_neg;
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
