/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-12-2024
 * time : 01:07:24
 * Problem Name : B_Subsequence_Hate
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
    int ans1 = 0, ans0 = 0;
    bool ck = false;

    for (int i = 0;i < s.size();i++) {
        if (s[i] == '0' && s[i + 1] == '1' && ck == false) {
            ck = true;
        }
        else if (ck == true) {
            if (s[i] == '1') {
                ans0++;
            }
            else {
                ck = false;
            }
        }
    }
    cout << ans0;
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