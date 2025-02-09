/**
 *
 * Author : Md.Ariful Islam
 * Date : 10-02-2025
 * time : 00:41:52
 * Problem Name : C_1_Skibidus_and_Fanum_Tax_easy_version
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

    ll n, m;
    cin >> n >> m;
    vec a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    cin >> m;
    vec b;
    ll x = min(a[0], m - a[0]);
    b.push_back(x);

    for (int i = 1;i < n;i++) {
        ll cr_mn = min(a[i], m - a[i]);
        ll cr_mx = max(a[i], m - a[i]);

        if (cr_mn >= x) {
            b.push_back(cr_mn);
            x = cr_mn;
        }
        else {

            b.push_back(cr_mx);
            x = cr_mx;
        }


    }
    // for (auto i : b) {
    //     cout << i << endl;
    // }
    if (is_sorted(b.begin(), b.end())) {
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