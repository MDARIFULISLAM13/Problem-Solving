/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-11-2024
 * time : 22:05:19
 * Problem Name : A_XXXXX
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
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        ll sum = 0;
        int a[n + 1];
        for (int i = 1;i <= n;i++) {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % k != 0) {
            cout << n << endl;
        }
        else {
            int mn1 = 0;
            for (int i = 1;i <= n;i++) {
                mn1 += 1;
                if (a[i] % k != 0) {

                    break;
                }

            }
            int mn2 = 0;
            for (int i = n;i >= 1;i--) {
                mn2 += 1;
                if (a[i] % k != 0) {

                    break;
                }

            }
            // cout << mn1 << " " << mn2 << endl;
            int mn = min(mn1, mn2);
            if (mn == n) {
                cout << -1 << endl;
            }
            else {
                cout << n - mn << endl;
            }
        }
    }


    return 0;
}