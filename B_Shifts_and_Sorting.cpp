/**
 *
 * Author : Md.Ariful Islam
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
void arif() {
    string s;
    cin >> s;
    ll ans = 0;
    int cnt = 0;
    for (int i = 0;i < s.size();i++) {
        if (s[i] == '1') {
            cnt++;
        }
        else {
            if (cnt != 0) {
                ans += (cnt + 1);
            }
        }
    }
    cout << ans << endl;

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