/**
 *
 * Author : Md.Ariful Islam
 * Date : 18-10-2024
 * time : 05:27:34
 * Problem Name : B_Rock_and_Lever
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
    ll initial = 2;
    ll cnt = 0;
    ll ans = 0;
    bool ck = false;
    for (ll i = 0;i < n;i++) {
        if (a[i] < initial) {
            cnt += 1;
            ck = true;
        }
        else {

            while (a[i] >= initial) {
                initial *= 2;
            }
            ans += ((cnt * (cnt - 1)) / 2);
            cnt = 1;
            ck = false;
        }
        // cout << cnt << " " << initial << " " << a[i] << endl;
    }
    if (ck == true) {
        ans += ((cnt * (cnt - 1)) / 2);
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