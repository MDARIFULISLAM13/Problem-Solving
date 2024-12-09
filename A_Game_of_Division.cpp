/**
 *
 * Author : Md.Ariful Islam
 * Date : 08-12-2024
 * time : 21:05:25
 * Problem Name : A_Game_of_Division
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

    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vec a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;
        ll index = -1;


        for (ll i = 0; i < n; i++) {
            bool canWin = true;
            for (ll j = 0; j < n; j++) {
                if (i != j && abs(a[i] - a[j]) % k == 0) {
                    canWin = false;
                    break;
                }
            }
            if (canWin) {
                found = true;
                index = i + 1;
                break;
            }
        }

        if (found) {
            yes;
            cout << index << endl;
        }
        else {
            no;
        }
    }
    return 0;
}
