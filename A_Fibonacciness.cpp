/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-01-2025
 * time : 00:20:27
 * Problem Name : A_Fibonacciness
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
    int a[5];
    for (int i = 0;i < 5;i++) {
        if (i == 2) {
            a[i] = 0;
        }
        else {
            cin >> a[i];
        }
    }
    a[2] = a[0] + a[1];

    int ans = 0;
    for (int i = 2;i < 5;i++) {
        if (a[i] == a[i - 1] + a[i - 2]) {
            ++ans;
        }

    }
    int anss = 0;
    a[2] = a[3] - a[1];
    for (int i = 2;i < 5;i++) {
        if (a[i] == a[i - 1] + a[i - 2]) {
            ++anss;
        }

    }


    cout << max(ans, anss) << endl;
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