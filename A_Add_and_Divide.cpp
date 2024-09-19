/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-09-2024
 * time : 03:02:50
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
int solve(ll a, ll b) {
    int ans = 0;
    while (a > 0) {
        a /= b;
        ans++;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        int ans = INT_MAX;
        if (b != 1) {
            ans = solve(a, b);
        }
        int in = 0;
        while (1) {
            b += 1;
            in += 1;
            int ck = solve(a, b);
            ck += in;
            if (ck > ans) {
                break;
            }
            else {
                ans = ck;
            }
        }
        cout << ans << endl;
    }

    return 0;
}