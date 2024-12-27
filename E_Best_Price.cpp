/**
 *
 * Author : Md.Ariful Islam
 * Date : 22-12-2024
 * time : 22:25:32
 * Problem Name : E_Best_Price
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
    int n;
    cin >> n;
    ll k;
    cin >> k;
    vec a(n), b(n);
    vec p;
    for (int i = 0;i < n;i++) {
        cin >> a[i];
        p.push_back(a[i]);
    }
    for (int i = 0;i < n;i++) {
        cin >> b[i];
        p.push_back(b[i]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(p.begin(), p.end());
    p.erase(unique(p.begin(), p.end()), p.end());
    ll mx_earn = 0;
    for (auto p_val : p) {
        ll lb_a = lower_bound(a.begin(), a.end(), p_val) - a.begin();
        ll lb_b = lower_bound(b.begin(), b.end(), p_val) - b.begin();
        ll D = lb_a - lb_b;
        if (D <= k) {
            ll buyers = n - lb_b;
            ll earn = p_val * buyers;
            mx_earn = max(earn, mx_earn);
        }
    }
    cout << mx_earn << endl;
}
int main()
{
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