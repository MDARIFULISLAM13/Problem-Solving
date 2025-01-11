/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-01-2025
 * time : 14:38:33
 * Problem Name : C_Number_Game
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
        ll n;
        cin >> n;
        if (n == 1) {
            cout << "FastestFinger\n";
        }
        else if (n == 2) {
            cout << "Ashishgup\n";
        }
        else if (n % 2 != 0) {
            cout << "Ashishgup\n";
        }
        else {
            int v = n / 2;
            if (v % 2 == 0) {
                cout << "Ashishgup\n";
            }
            else {
                cout << "FastestFinger\n";
            }
        }
    }

    return 0;
}