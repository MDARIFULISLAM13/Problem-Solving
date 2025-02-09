/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-02-2025
 * time : 01:08:41
 * Problem Name : E_Scuza
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define mem(dp,i) memset(dp,i,sizeof(dp));

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> nn(n), mxv(n), mxs(n);
    ll pre_mx = 0;

    for (int i = 0; i < n; i++) {
        cin >> nn[i];
        pre_mx = max(pre_mx, nn[i]);
        mxv[i] = pre_mx;
        mxs[i] = (i == 0) ? nn[i] : mxs[i - 1] + nn[i];
    }

    while (q--) {
        ll x;
        cin >> x;

        if (mxv[0] > x) {
            cout << 0 << " ";
            continue;
        }

        ll low = 0, high = n - 1, index = 0;
        while (low <= high) {
            ll mid = (low + high) / 2;
            if (mxv[mid] <= x) {
                index = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        cout << mxs[index] << " ";
    }
    cout << endl;
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
