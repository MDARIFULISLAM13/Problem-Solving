/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-01-2025
 * time : 01:02:40
 * Problem Name : D_Subtract_Min_Sort
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

    int n;
    cin >> n;
    vec a(n);
    cin >> a[0];
    for (int i = 1;i < n;i++) {
        cin >> a[i];
        int x = min(a[i], a[i - 1]);
        a[i - 1] -= x;
        a[i] -= x;

    }
    for (int i = 1;i < n;i++) {
        if (a[i - 1] > a[i]) {
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
        solve();
    }


    return 0;
}