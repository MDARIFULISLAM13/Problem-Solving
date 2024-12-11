/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-12-2024
 * time : 01:31:17
 * Problem Name : C_Two_Movies
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
    int a[n + 1], b[n + 1];

    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (int i = 0;i < n;i++) {
        cin >> b[i];
    }
    int a1 = 0, b1 = 0, c = 0, m = 0;
    for (int i = 0;i < n;i++) {
        if (a[i] > b[i] && a[i] == 1) {
            a1++;
        }
        else if (a[i] < b[i] && b[i] == 1) {
            b1++;
        }
        else if (a[i] == b[i] && a[i] == 1) {
            c++;
        }
        else if (a[i] == b[i] && a[i] == -1) {
            m++;
        }
    }
    while (m != 0) {
        if (a1 > b1) {
            a1--;
        }
        else {
            b1--;
        }
        m--;
    }
    while (c != 0) {
        if (a1 > b1) {
            b1++;
        }
        else {
            a1++;
        }
        c--;
    }
    cout << min(a1, b1) << endl;

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