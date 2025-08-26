

/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-08-2025
 * time : 06:03:33
 * Problem Name : E_Generate_a_String
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, x, y;
    cin >> n >> x >> y;

    vec dp(n + 1, LLONG_MAX);
    dp[0] = 0;

    for (ll i = 1; i <= n; i++)
    {

        dp[i] = min(dp[i], dp[i - 1] + x);
        if (i % 2 == 0)
        {
            dp[i] = min(dp[i], dp[i / 2] + y);
        }
        else
        {
            dp[i] = min(dp[i], dp[(i + 1) / 2] + y + x);
            dp[i] = min(dp[i], dp[(i -1) / 2] + y + x);
        }
    }

    cout << dp[n];

    return 0;
}