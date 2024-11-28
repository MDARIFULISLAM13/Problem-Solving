
/**
 *
 * Author : Md.Ariful Islam
 * Date : 23-11-2024
 * time : 21:46:36
 * Problem Name : C_1_Shohag_Loves_XOR_Easy_Version
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void arif() {
    ll x, m;
    cin >> x >> m;

    ll cnt = 0;
    ll max_y = min(m, (1LL << ((ll)log2(x) + 1)) - 1);

    for (ll y = 1; y <= max_y; y++) {
        ll b = x ^ y;
        if (b == 0 || x == y) continue;
        if (x % b == 0 || y % b == 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        arif();
    }

    return 0;
}
