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
    vec b(n + 1);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (int i = 0;i < n;i++) {
        cin >> b[i];
    }
    ll ans = 0;
    int ck = 0;
    ll v;
    cin >> v;

    for (int i = 0;i < n;i++) {
        ans += (abs(b[i] - a[i]));
        if (ck == 0) {
            if (a[i] >= v && b[i] <= v) {
                ck = 1;
                ans += 1;
            }
            else if (a[i] <= v && b[i] >= v) {
                ck = 1;
                ans += 1;
            }
        }
    }
    if (ck == 0) {
        ll mn = INT_MAX;
        ans += 1;
        for (int i = 0;i < n;i++) {
            ll cr = abs(a[i] - v);
            mn = min(cr, mn);
            cr = abs(b[i] - v);
            mn = min(cr, mn);

        }
        ans += mn;

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
        arif();
    }

    return 0;
}