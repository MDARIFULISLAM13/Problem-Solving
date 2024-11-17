#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 2e5 + 10;
const ll INF = 1e18;

struct Hurdle {
    ll l, r;
};

struct PowerUp {
    ll pos, value;
};

ll solve(int n, int m, ll L, vector<Hurdle>& hurdles, vector<PowerUp>& powerUps) {
    vector<ll> dp(L + 1, INF);
    dp[1] = 0;  // Starting at position 1
    ll jumpPower = 1;

    int hurdleIdx = 0, powerIdx = 0;
    priority_queue<ll, vector<ll>, greater<ll>> pq; // Min-heap for power-ups values

    for (ll pos = 1; pos <= L; pos++) {
        // Skip hurdles
        while (hurdleIdx < n && pos >= hurdles[hurdleIdx].l && pos <= hurdles[hurdleIdx].r) {
            pos = hurdles[hurdleIdx].r;
            hurdleIdx++;
        }

        // Add available power-ups to the priority queue
        while (powerIdx < m && powerUps[powerIdx].pos == pos) {
            pq.push(powerUps[powerIdx].value);
            powerIdx++;
        }

        // Take the minimum power-up if needed to jump further
        while (!pq.empty() && pos + jumpPower < L) {
            jumpPower += pq.top();
            pq.pop();
            dp[pos]++;  // Count the power-up taken
        }

        // If the jumpPower reaches or exceeds L, we have reached the destination
        if (pos + jumpPower >= L) {
            return dp[pos];
        }
    }

    return -1; // If not possible to reach L
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        ll L;
        cin >> n >> m >> L;

        vector<Hurdle> hurdles(n);
        for (int i = 0; i < n; i++) {
            cin >> hurdles[i].l >> hurdles[i].r;
        }

        vector<PowerUp> powerUps(m);
        for (int i = 0; i < m; i++) {
            cin >> powerUps[i].pos >> powerUps[i].value;
        }

        ll result = solve(n, m, L, hurdles, powerUps);
        cout << result << "\n";
    }

    return 0;
}
