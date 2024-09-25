/**
 *
 * Author : Md.Ariful Islam
 * Date : 21-09-2024
 * time : 20:47:27
 *
 **/
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
void solve() {
    ll n, k;
    cin >> n >> k;
    ll g = 0, ans = 0;
    for (ll i = 1;i <= n;i++) {
        ll v;
        cin >> v;
        if (v == 0 && g > 0) {
            g--;
            ans++;
        }
        if (v >= k) {
            g += v;
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