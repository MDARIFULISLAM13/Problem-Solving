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
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    vec v(n);
    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }
    ll need = 0;
    ll p = 0;
    for (int i = 0;i < n;i++) {
        ll nc = (v[i] - p) * a;
        need += (min(nc, b));
        p = v[i];
    }
    if (need >= f) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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