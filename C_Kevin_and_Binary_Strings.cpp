/**
 *
 * Author : Md.Ariful Islam
 * Date : 19-12-2024
 * time : 20:58:58
 * Problem Name : C_Kevin_and_Binary_Strings
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
    int x = s.size();
    cout << 1 << " " << x << " ";
    int f = 0;
    for (int i = 0;i < x;i++) {
        if (s[i] == '0') {
            break;
        }
        ++f;
    }
    if (f == x) {
        cout << 1 << " " << 1 << endl;
    }
    else {

        string ns = "";
        for (int i = f;i < x;i++) {
            if (s[i] == '0') {
                ns += '1';
            }
            else {
                ns += '0';
            }
        }
        int cnt = 0;
        int l = 0, r = 0;

        for (int i = 0;i < x - ns.size() + 1;i++) {
            int j = 0;
            int k = i;
            int cr = 0;
            while (1) {
                if (s[k] != ns[j]) {
                    break;
                }
                ++cr;
                j++;
                k++;
            }
            if (cr > cnt) {


                cnt = cr;
                l = i + 1, r = l + ns.size() - 1;
            }
        }

        cout << l << " " << r << endl;
    }
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