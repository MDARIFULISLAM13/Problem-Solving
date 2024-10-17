/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-10-2024
 * Time : 01:53:42
 * Problem Name : B_Kar_Salesman
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
    ll n, x;
    cin >> n >> x;
    vec car(n);
    for (ll i = 0; i < n; i++) {
        cin >> car[i];
    }

    sort(car.rbegin(), car.rend());
    ll ans = 0;
    ll i = 0;
    while (!car.empty()) {
        ll v = car.size() - 1;
        ans += car[v];

        for (ll j = 0; j < x; j++) {
            if (j >= car.size()) break;
            car[j] -= car[v];

            if (car[j] < 0) {
                car[j] = 0;
            }
        }

        car.pop_back();
    }
    cout << ans << endl;
}

int main() {
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
