#include <bits/stdc++.h>
#define int long long int
using namespace std;
signed main() {
    int t = 1;cin >> t;
    while (t--) {
        int n, m, k;cin >> n >> m >> k;
        int a[m];
        for (int& i : a)cin >> i;
        int b[k];
        for (int& i : b)cin >> i;
        if (n - k > 1) {
            while (m--) {
                cout << 0;
            }
            cout << endl;
        }
        else if (n == k) {
            while (m--) {
                cout << 1;
            }
            cout << endl;
        }
        else {
            vector<int>c(n + 1, 1);
            for (int i = 0;i < k;i++) {
                c[b[i]] = 0;
            }
            for (int i = 1;i <= n;i++)
                cout << c[i];
            cout << endl;
        }
    }
}