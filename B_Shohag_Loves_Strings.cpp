/**
 *
 * Author : Md.Ariful Islam
 * Date : 23-11-2024
 * time : 21:05:24
 * Problem Name : B_Shohag_Loves_Strings
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
void arif() {
    string s;
    cin >> s;
    if (s.size() == 1) {
        cout << -1 << endl;
        return;
    }

    for (int i = 0;i < s.size() - 2;i++) {
        if (s[i] == s[i + 1]) {
            cout << s[i] << s[i] << endl;
            return;
        }
        if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]) {
            cout << s[i] << s[i + 1] << s[i + 2] << endl;
            return;
        }
    }
    if (s[s.size() - 1] == s[s.size() - 2]) {
        cout << s[s.size() - 1] << s[s.size() - 1] << endl;
        return;
    }
    cout << -1 << endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        arif();
    }

    return 0;
}