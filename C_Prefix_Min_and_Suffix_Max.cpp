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
    vec v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vec pre(n + 1);
    pre[n] = v[n];
    for (int i = n - 1; i >= 1; i--)
    {
        pre[i] = max(v[i], pre[i + 1]);
    }

    ll mn = v[1];
    cout << 1;
    for (int i = 2; i <= n; i++)
    {
        if (v[i] <= mn)
        {
            cout << 1;
            mn = min(v[i], mn);
        }
        else if (v[i] == pre[i])
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }

    cout << endl;
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
