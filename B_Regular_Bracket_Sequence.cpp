/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-12-2024
 * time : 15:58:03
 * Problem Name : B_Regular_Bracket_Sequence
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    int ans = 0, b = 0, d = 0;
    for (int i = 0;i < s.size();i++) {
        if (s[i] == '(') {
            ++b;
        }
        if (s[i] == ')') {
            if (b > 0) {
                --b;
                ans += 2;
            }
        }
    }
    cout << ans << endl;
    return 0;
}