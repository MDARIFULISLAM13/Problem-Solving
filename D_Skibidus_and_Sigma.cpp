/**
 *
 * Author : Md.Ariful Islam
 * Date : 10-02-2025
 * time : 00:24:04
 * Problem Name : D_Skibidus_and_Sigma
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
    vector<pair<ll, ll>>v;
    while (n--) {
        ll sum = 0;
        ll mxsum = 0;
        for (ll i = 0;i < m;i++) {
            ll val;
            cin >> val;
            sum += val;
            mxsum += sum;


        }
        v.push_back({ sum,mxsum });
    }

    sort(v.rbegin(), v.rend());
    ll ans = v[0].second;
    ll add_pre = v[0].first;
    for (auto i = 1;i < v.size();i++) {
        ll val = add_pre * m;

        val += v[i].second;
        ans += val;
        add_pre += v[i].first;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}