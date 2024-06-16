/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-06-2024
 * time : 20:47:30
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
    int n;
    cin >> n;
    vec a(n);
    for (auto& i : a) {
        cin >> i;
    }

    if (n == 1) {
        if (a[0] == 0) {
            cout << "1" << endl;
        }
        else {
            cout << "0\n";
        }
        return;
    }


    ll mx = 0;
    ll sum = 0;
    ll ans = 0;

    for (int i = 0;i < n;i++) {

        if (mx < a[i]) {
            sum += mx;
            mx = a[i];
        }
        else {
            sum += a[i];
        }
        if (sum == mx) {
            ans++;
        }
        // cout << ans << " " << mx << " " << sum << endl;


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