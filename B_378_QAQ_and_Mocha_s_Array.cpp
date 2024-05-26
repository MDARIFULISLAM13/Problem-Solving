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
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[0] == 1) {
        cout << "Yes\n";
        return;
    }
    else {
        ll x = a[0];
        ll y = 0;

        for (ll i = 0;i < n;i++) {
            if (a[i] % x != 0) {
                if (y == 0) {
                    y = a[i];
                }
                else if (a[i] % y != 0) {
                    cout << "No\n";
                    return;
                }


            }
        }
        cout << "Yes\n";
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