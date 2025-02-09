/**
 *
 * Author : Md.Ariful Islam
 * Date : 10-02-2025
 * time : 00:15:36
 * Problem Name : B_Skibidus_and_Ohio
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
    string s;
    cin >> s;

    for (int i = 0;i < s.size();i++) {
        if (s[i] == s[i + 1]) {
            cout << 1 << endl;
            return;

        }
    }

    cout << s.size() << endl;

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