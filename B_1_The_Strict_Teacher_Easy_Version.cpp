/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-09-2024
 * time : 21:05:00
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
    ll n, m, q;
    cin >> n >> m >> q;

    ll t1, t2;
    cin >> t1 >> t2;
    ll a;
    cin >> a;
    ll mx = max(t1, t2);
    ll mn = min(t1, t2);
    if (a > mx) {
        cout << n - mx << endl;
        return;
    }
    if (a < mn) {
        cout << mn - 1 << endl;
        return;
    }
    else {
        cout << abs(t1 - t2) / 2 << endl;
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