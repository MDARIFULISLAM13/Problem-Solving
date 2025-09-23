#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> p(n + 1, 0);
        vector<int> zeros;

        for (int i = 1; i <= n; i++) {
            if (s[i - 1] == '1') p[i] = i;
            else zeros.push_back(i);
        }

        if ((int)zeros.size() == 1) {
            cout << "NO\n";
            continue;
        }

        // rotate derangement among zeros
        if (!zeros.empty()) {
            for (int i = 0; i < (int)zeros.size(); i++) {
                int from = zeros[i];
                int to = zeros[(i + 1) % zeros.size()];
                p[from] = to;
            }
        }

        cout << "YES\n";
        for (int i = 1; i <= n; i++) cout << p[i] << " ";
        cout << "\n";
    }
    return 0;
}
