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
    int n;
    cin >> n;
    vec v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n - 1; i++)
    {
        if (abs(v[i] - v[i + 1]) <= 1)
        {
            cout << 0 << endl;
            return;
        }
    }

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x = v[j];
            int y = v[j];
            if (j + 1 != n)
            {
                x = min(v[j], v[j + 1]);
                y = max(v[j], v[j + 1]);
            }

            if (v[j] == v[i] + 1 || v[j] == v[i] - 1)
            {
                ans = min(ans, (abs(i - j) - 1));
            }
            if (v[i] >= x && v[i] <= y)
            {
                ans = min(ans, (abs(i - j)));
            }
        }
    }
    if (ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {

        cout << ans << endl;
    }
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