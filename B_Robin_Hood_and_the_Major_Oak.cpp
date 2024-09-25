/**
 *
 * Author : Md.Ariful Islam
 * Date : 21-09-2024
 * time : 20:58:06
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
    ll n, k;
    cin >> n >> k;
    ll sum = 0;
    if (n <= k) {
        sum = n * (n + 1) / 2;
        if (sum % 2 == 0) {
            cout << "YES\n";
            return;
        }
    }
    else {
        sum = (k * (k + 1)) / 2 + (n - k) * k;
        if (sum % 2 == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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