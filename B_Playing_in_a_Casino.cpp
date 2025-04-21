/**
 *
 * Author : Md.Ariful Islam
 * Date : 18-04-2025
 * time : 11:23:48
 * Problem Name : B_Playing_in_a_Casino (Optimized)
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define endl '\n'
#define vec vector<ll>

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vec> a(n, vec(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    ll ans = 0;
    for (int col = 0; col < m; col++)
    {
        vec column;
        for (int row = 0; row < n; row++)
        {
            column.push_back(a[row][col]);
        }
        sort(column.begin(), column.end());

        for (int i = 0; i < n; i++)
        {
            ans += column[i] * (2LL * i - n + 1);
        }
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
    {
        solve();
    }

    return 0;
}
