#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> visited(n + 1, false);
    ll total_cost = 0;

    for (int k = 1; k <= n; k++) {
        for (int multiple = k; multiple <= n; multiple += k) {
            if (s[multiple - 1] == '0' && !visited[multiple]) {
                total_cost += k;
                visited[multiple] = true;
            }
            if (s[multiple - 1] == '1') break; // Stop if we reach an element in T
        }
    }
    cout << total_cost << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
