/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-10-2024
 * time : 16:34:52
 * Problem Name : B_Card_Constructions
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
#define mem(dp,i) memset(dp,i,sizeof(dp));
void arif() {
    ll n;
    cin >> n;
    int ans = 0;
    int v = 0;
    while (n > 1) {


        int l = 0, r = 26000;
        while (l <= r) {
            int h = (l + r) / 2;
            ll x = (h * (3 * h + 1)) / 2;
            if (x == n) {
                v = x;
                break;
            }
            else if (x < n) {
                v = x;
                l = h + 1;
            }
            else if (x > n) {
                r = h - 1;
            }
        }
        if (v != 0) {
            ans++;
        }
        n -= v;
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