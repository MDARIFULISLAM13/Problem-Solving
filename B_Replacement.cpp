/**
 *
 * Author : Md.Ariful Islam
 * Date : 10-11-2024
 * time : 17:12:44
 * Problem Name : B_Replacement
 *
 **/
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
    string s, r;
    cin >> s >> r;
    int cnt0 = 0, cnt1 = 0;
    for (auto i : s) {
        if (i == '0') {
            cnt0++;
        }
        else {
            cnt1++;
        }
    }
    n -= 1;
    int i = 0;
    while (n != 0) {
        n--;
        if (cnt0 == 0 || cnt1 == 0) {
            cout << "NO\n";
            return;
        }
        if (r[i] == '0') {
            cnt1--;
        }
        else {
            cnt0--;
        }
        i++;
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