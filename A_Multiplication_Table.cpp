/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-09-2024
 * time : 02:40:16
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, x;
    cin >> n >> x;
    int ans = 0;
    if (x <= n) {
        ans++;
    }
    for (int i = 2;i <= n;i++) {
        if (x % i == 0 && n * i >= x) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}