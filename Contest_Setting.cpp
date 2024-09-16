/**
 *
 * Author : Md.Ariful Islam
 * Date : 16-09-2024
 * time : 18:46:48
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
    int b, y;
    cin >> b >> y;
    if (b <= y) {
        cout << "1\n";
        return;
    }
    ll ans = 2;
    int x = 1;
    while (true) {
        int r1 = x / 2;
        int r2 = x / 2;
        if (r1 + r2 != x) {
            r1 += 1;
        }
        ll cost = (x * y) + pow(r1, 2) + pow(r2, 2);

        if (cost > b) {
            break;
        }
        if (cost <= b) {
            ll total = pow(2, x);
            ans = max(ans, total);
        }
        x++;
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