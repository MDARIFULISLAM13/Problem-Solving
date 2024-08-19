/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-08-2024
 * time : 21:53:46
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
    vector<pair<ll, ll>>p(n);
    for (int i = 0;i < n;i++) {
        cin >> p[i].first >> p[i].second;
    }
    ll xs, ys, xt, yt;
    cin >> xs >> ys >> xt >> yt;
    ll dis = (xt - xs) * (xt - xs) + (yt - ys) * (yt - ys);

    for (const auto& i : p) {
        ll dx = i.first - xt;
        ll dy = i.second - yt;
        if (dis >= dx * dx + dy * dy) {
            cout << "NO\n";
            return;
        }
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