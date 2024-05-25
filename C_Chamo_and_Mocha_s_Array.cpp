/**
 *
 * Author : Md.Ariful Islam
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
    vec a(n);
    ll mx1 = 0;
    ll mx2 = 0;
    for (ll i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (ll i = 0;i < n;i++) {
        ll x = a[i];
        if (x > mx1) {
            mx1 = x;

        }

    }
    if (a[n - 1] != mx1) {
        cout << mx1 << endl;
    }
    else {
        sort(a.begin(), a.end());
        cout << a[n - 2] << endl;
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
        arif();
    }

    return 0;
}