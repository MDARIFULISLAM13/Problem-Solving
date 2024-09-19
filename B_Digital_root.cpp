/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-09-2024
 * time : 03:25:20
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

    int t;
    cin >> t;
    while (t--) {
        ll k, x;
        cin >> k >> x;
        ll ans = 9 * (k - 1);
        ans += x;
        cout << ans << endl;
    }

    return 0;
}