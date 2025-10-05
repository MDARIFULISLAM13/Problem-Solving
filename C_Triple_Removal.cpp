#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        // prefix sums
        vector<int> pref0(n + 1, 0), pref1(n + 1, 0), prefPair(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            pref0[i] = pref0[i - 1] + (a[i] == 0);
            pref1[i] = pref1[i - 1] + (a[i] == 1);
            if (i > 1)
                prefPair[i] = prefPair[i - 1] + (a[i] == a[i - 1]);
            else
                prefPair[i] = 0;
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;

            int cnt0 = pref0[r] - pref0[l - 1];
            int cnt1 = pref1[r] - pref1[l - 1];
            int len = r - l + 1;

            // not divisible → impossible
            if (cnt0 % 3 != 0 || cnt1 % 3 != 0)
            {
                cout << -1 << "\n";
                continue;
            }

            // check consecutive in O(1)
            bool consecutive = (prefPair[r] - prefPair[l] > 0);

            int ans = len / 3;
            if (!consecutive)
                ans++;
            cout << ans << "\n";
        }
    }
    return 0;
}