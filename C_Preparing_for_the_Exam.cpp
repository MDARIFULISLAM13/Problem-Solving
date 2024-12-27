/**
 *
 * Author : Md.Ariful Islam
 * Date : 22-12-2024
 * time : 21:06:53
 * Problem Name : C_Preparing_for_the_Exam
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
    int n, m, k;
    cin >> n >> m >> k;
    int t = 0;
    int a[m + 1];
    for (int i = 0;i < m;i++) {
        cin >> a[i];
    }
    map<int, bool>f;
    for (int i = 0;i < k;i++) {
        int v;
        cin >> v;
        if (f[v] == 0) {
            f[v] = true;
            ++t;
        }
    }
    if (n - t > 1) {
        for (int i = 0;i < m;i++) {
            cout << 0;
        }
        cout << endl;
        return;
    }
    if (n - t <= 0) {
        for (int i = 0;i < m;i++) {
            cout << 1;
        }
        cout << endl;
        return;
    }

    for (int i = 0;i < m;i++) {
        if (f[a[i]] == 0) {
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    cout << endl;

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