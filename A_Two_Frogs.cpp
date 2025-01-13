/**
 *
 * Author : Md.Ariful Islam
 * Date : 12-01-2025
 * time : 20:39:03
 * Problem Name : A_Two_Frogs
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
void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    if (abs(a - b) % 2 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
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