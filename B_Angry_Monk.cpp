/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-07-2024
 * time : 20:46:07
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
    ll n, k;
    cin >> n >> k;
    vec a(k);
    for (auto& i : a) {
        cin >> i;
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0;i < k - 1;i++) {
        if (a[i] == 1) {
            ans += 1;
        }
        else {
            ans += 1;
            ans = ans + ((a[i] - 1) * 2);
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