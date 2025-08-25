#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 998244353

int modinv(int a)
{
    int m = mod, u = 1, v = 0;
    while (m)
    {
        int t = a / m;
        a -= t * m;
        swap(a, m);
        u -= t * v;
        swap(u, v);
    }
    return (u + mod) % mod;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> cell(m + 1);

    for (int i = 0; i < n; i++)
    {
        int l, r, p, q;
        cin >> l >> r >> p >> q;
        int prob = (p * modinv(q)) % mod;
        for (int j = l; j <= r; j++)
        {
            cell[j].push_back({prob, (mod + 1 - prob) % mod});
        }
    }

    int res = 1;
    for (int i = 1; i <= m; i++)
    {
        int sz = cell[i].size();
        if (sz == 0)
        {
            res = 0;
            break;
        }
        int total = 0;
        for (int j = 0; j < sz; j++)
        {
            int prob = cell[i][j].first;
            int prod = prob;
            for (int k = 0; k < sz; k++)
            {
                if (k != j)
                    prod = (prod * cell[i][k].second) % mod;
            }
            total = (total + prod) % mod;
        }
        res = (res * total) % mod;
    }

    cout << res << '\n';
}
