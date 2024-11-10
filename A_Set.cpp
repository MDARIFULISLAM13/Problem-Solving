/**
 *
 * Author : Md.Ariful Islam
 * Date : 10-11-2024
 * time : 17:07:12
 * Problem Name : A_Set
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll l, r, k;
        cin >> l >> r >> k;
        int ans = max((1ll * 0), (r / k) - (l - 1));

        cout << ans << endl;
    }

    return 0;
}