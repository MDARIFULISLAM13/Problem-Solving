/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-09-2024
 * time : 20:42:10
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
void solve() {
    ll n;
    cin >> n;
    vec a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    ll pre = a[n - 2];
    for (int i = 0;i < n - 2;i++) {
        pre = pre - a[i];
    }
    cout << a[n - 1] - pre << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}