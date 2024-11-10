/**
 *
 * Author : Md.Ariful Islam
 * Date : 19-10-2024
 * time : 20:22:35
 * Problem Name : A_A_Gift_From_Orangutan
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
    int mx = 0, mn = INT_MAX;
    int v = 0;
    for (int i = 1;i <= n;i++) {
        cin >> v;
        if (v > mx) {
            mx = v;
        }
        if (v < mn) {
            mn = v;
        }

    }
    ll ans = mx - mn;
    ans *= n - 1;
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