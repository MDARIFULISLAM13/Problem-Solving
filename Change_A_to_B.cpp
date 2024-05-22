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
    ll a, b, k;
    cin >> a >> b >> k;
    ll ans = 0;
    while (1) {
        if (b == a) {
            break;
        };
        if (b % k != 0) {
            ans += (b % k);
            b -= (b % k);

        }
        else if (b % k == 0) {
            ans++;
            b /= k;
        };
        if ((b / k) < a) {
            ans += b - a;
            break;
        }
        if (b == a) {
            break;
        }
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