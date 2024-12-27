/**
 *
 * Author : Md.Ariful Islam
 * Date : 27-12-2024
 * time : 22:58:06
 * Problem Name : A_Factory
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

    ll a, m;
    cin >> a >> m;
    ll x = a;
    for (int i = 1;i <= 1e7;i++) {
        if (x % m == 0) {
            cout << "Yes\n";
            return 0;
        }
        x = x + x % m;
    }
    cout << "No\n";

    return 0;
}