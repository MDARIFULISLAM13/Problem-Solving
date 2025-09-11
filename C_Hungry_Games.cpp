#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll x;
        cin >> n >> x;
        vector<ll> a(n + 1), pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }

        vector<int> nxt(n + 1, n);
        for (int i = 0; i < n; i++)
        {
            ll target = pref[i] + x;
            int p = upper_bound(pref.begin() + i + 1, pref.end(), target) - pref.begin();
            if (p <= n)
                nxt[i] = p - 1;
            else
                nxt[i] = n;
        }

        vector<ll> f(n + 2, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            if (nxt[i] == n)
                f[i] = 0;
            else
                f[i] = 1 + f[nxt[i] + 1];
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += (n - i) - f[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
