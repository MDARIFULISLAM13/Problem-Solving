/**
 *
 * Author : Md.Ariful Islam
 * Date : 22-12-2024
 * time : 20:56:23
 * Problem Name : A_Preparing_for_the_Olympiad
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
    int a[n], b[n];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (int i = 0;i < n;i++) {
        cin >> b[i];
    }
    int ans = 0;
    for (int i = 0;i < n - 1;i++) {
        if (a[i] > b[i + 1]) {
            ans += (a[i] - b[i + 1]);

        }
    }
    ans += a[n - 1];
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        solve();
    }

    return 0;
}