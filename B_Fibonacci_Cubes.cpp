#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Precompute Fibonacci numbers
    vector<ll> fib(11);
    fib[1] = 1;
    fib[2] = 2;
    for (int i = 3; i <= 10; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        // Max base side needed = fn (largest cube base)
        ll max_side = fib[n];
        // Total height = sum of f1 to fn
        ll total_height = 0;
        for (int i = 1; i <= n; ++i)
            total_height += fib[i];

        string ans = "";
        while (m--)
        {
            ll w, l, h;
            cin >> w >> l >> h;

            // Ensure base supports largest cube and height fits all cubes
            if (min(w, l) >= max_side && h >= total_height)
                ans += '1';
            else
                ans += '0';
        }

        cout << ans << '\n';
    }

    return 0;
}
