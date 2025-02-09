/**
 *
 * Author : Md.Ariful Islam
 * Date : 10-02-2025
 * time : 00:57:59
 * Problem Name : C_2_Skibidus_and_Fanum_Tax_hard_version
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

    int n, m;
    cin >> n >> m;
    vec a(n), b(m);
    for (int i = 0;i < n;i++) {
        cin >> a[i];

    }
    for (int i = 0;i < m;i++) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    vec v;
    ll x = min(a[0], b[0] - a[0]);
    v.push_back(x);
    for (int i = 1;i < n;i++) {

        ll est = a[i] + x;
        auto it = lower_bound(b.begin(), b.end(), est);
        ll val = LLONG_MIN;
        if (it != b.end()) {
            val = *it;
            // cout << a[i] << " " << val << endl;
        }
        if (val == LLONG_MIN) {
            v.push_back(a[i]);
            x = a[i];

        }
        else {
            ll cur_mn = min(a[i], val - a[i]);
            ll cur_mx = max(a[i], val - a[i]);

            if (cur_mn >= x) {
                v.push_back(cur_mn);
                x = cur_mn;
            }
            else {
                v.push_back(cur_mx);
                x = cur_mx;
            }


        }


    }
    // for (auto i : b) {
       //     cout << i << endl;
       // }
    if (is_sorted(v.begin(), v.end())) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

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