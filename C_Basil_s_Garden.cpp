/**
 *
 * Author : Md.Ariful Islam
 * Date : 30-06-2024
 * time : 21:26:51
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
void arif() {
    ll n;
    cin >> n;

    ll ans = 0;

    for (ll i = 0;i < n;++i) {
        ll v;
        cin >> v;
        ans = max(ans, v + i);
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
        arif();
    }


    return 0;
}