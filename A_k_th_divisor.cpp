/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-12-2024
 * time : 02:50:29
 * Problem Name : A_k_th_divisor
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vec a;
    for (ll i = 1;i * i <= n;i++) {
        if (n % i == 0) {
            a.push_back(i);
            if (i != n / i) {
                a.push_back(n / i);
            }
        }
    }
    sort(a.begin(), a.end());
    if (a.size() < m) {
        cout << -1;
    }
    else {
        cout << a[m - 1];
    }

    return 0;
}