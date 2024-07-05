/**
 *
 * Author : Md.Ariful Islam
 * Date : 30-06-2024
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
    for (auto& i : a) {
        cin >> i;
    }
    vec v;ll x = a[0];
    for (ll i : a) {
        x = max(i, x);
        if (x > i) {
            v.push_back(x - i);

        }
    }
    if (v.size() == 0) {
        cout << "0\n";
        return;
    }
    sort(v.begin(), v.end());
    ll val = v[v.size() - 1], y = 0;
    for (ll i = 0;i < v.size();i++) {
        val += (v[i] - y) * (v.size() - i);
        y = v[i];
    }
    cout << val << endl;
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