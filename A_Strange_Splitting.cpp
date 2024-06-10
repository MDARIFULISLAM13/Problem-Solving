/**
 *
 * Author : Md.Ariful Islam
 * Date : 09-06-2024
 * time : 20:40:05
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
    int n;
    cin >> n;
    vec a(n);
    for (auto& i : a) {
        cin >> i;
    }
    bool same = true;
    ll temp = a[0];
    for (ll i : a) {
        if (i != temp) {
            same = false;
            break;
        }
    }
    if (same) {
        cout << "NO\n";
        return;
    }
    string ans = "";
    for (int i = 0;i < n;i++) {
        ans += 'R';
    }
    if (a[1] == a[n - 1]) {
        ans[n - 1] = 'B';
    }
    else {
        ans[0] = 'B';
    }
    cout << "YES\n";
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