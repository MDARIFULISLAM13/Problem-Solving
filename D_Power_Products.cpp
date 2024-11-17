/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-11-2024
 * time : 02:36:24
 * Problem Name : D_Power_Products
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
bool compare(double a, double b) {
    return fabs(a - b) < 1e-6;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vec a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    ll cnt = 0;
    for (int i = 0;i < n;i++) {
        for (int j = i + 1;j < n;j++) {
            ll v = a[i] * a[j];
            du x = pow(v, 1.0 / k);
            ll r = round(x);

            if (compare(pow(r, k), v)) {
                cnt++;
            }
        }
    }
    cout << cnt;
}