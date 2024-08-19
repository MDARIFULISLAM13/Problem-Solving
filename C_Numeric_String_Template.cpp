#include <bits/stdc++.h>
using namespace std;

const int M = 2e5 + 5;
int a[M];
map<int, char> p;
map<char, int> r;

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    int m;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        string s;
        cin >> s;
        p.clear();
        r.clear();
        if (s.size() != n) {
            cout << "NO" << '\n';
            continue;
        }

        bool ok = true;
        for (int j = 0; j < n; j++) {
            int num = a[j + 1];
            char ch = s[j];

            if (p.count(num) && p[num] != ch) {
                ok = false;
                break;
            }
            if (r.count(ch) && r[ch] != num) {
                ok = false;
                break;
            }

            p[num] = ch;
            r[ch] = num;
        }

        if (ok) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
