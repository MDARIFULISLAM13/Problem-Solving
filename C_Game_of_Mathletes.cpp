/**
 *
 * Author : Md.Ariful Islam
 * Date : 19-01-2025
 * time : 23:59:19
 * Problem Name : C_Game_of_Mathletes
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

    ll n, k;
    cin >> n >> k;
    map<ll, ll>m;
    vec a(n);
    for (ll i = 0;i < n;i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    ll ans = 0;
    sort(a.begin(), a.end());

    for (ll i = 0;i < n;i++) {
        ll x = k - a[i];
        if (x == a[i]) {
            if (m[x] > 1) {
                ++ans;
                m[x] -= 2;
            }
        }
        else if (m[x] > 0 && m[a[i]] > 0) {
            ++ans;
            m[x]--;
            m[a[i]]--;
        }
    }
    cout << ans << endl;

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