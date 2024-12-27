/**
 *
 * Author : Md.Ariful Islam
 * Date : 27-12-2024
 * time : 06:30:37
 * Problem Name : C_Jellyfish_and_Green_Apple
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
    ll ans = 0;
    n = n % m;
    if (n == 0) {
        cout << 0 << endl;
        return;
    }
    int i = 1;
    while ((i < 4000)) {

        ++i;
        ans += n;
        n *= 2;
        n = n % m;
        if (n == 0) {
            cout << ans << endl;
            return;
        }



    }
    cout << -1 << endl;
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