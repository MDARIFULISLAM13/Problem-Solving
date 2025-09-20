#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<vector<ll>> dp(n, vector<ll>(n + 1, 0));

    for (int i = 0; i < n; i++)
    {
        vector<ll> current_sum_by_val(n + 1, 0);

        for (int k = 0; k < i; k++)
        {
            if (a[k] <= a[i])
            {
                for (int j = 0; j <= n; j++)
                {
                    current_sum_by_val[j] = (current_sum_by_val[j] + dp[k][j]) % MOD;
                }
            }
        }

        dp[i][a[i]] = (1 + current_sum_by_val[0]) % MOD;

        for (int j = 1; j <= n; j++)
        {
            if (j == a[i])
                continue;
            ll sum_A = 0, sum_B = 0;

            for (int k = 0; k < i; k++)
            {
                if (a[k] <= a[i])
                    sum_A = (sum_A + dp[k][j]) % MOD;
                if (a[k] <= j)
                    sum_B = (sum_B + dp[k][a[i]]) % MOD;
            }

            dp[i][j] = (sum_A + sum_B) % MOD;
        }
    }

    ll total_count = 1; // empty subsequence
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= n; j++)
            total_count = (total_count + dp[i][j]) % MOD;

    cout << total_count << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
