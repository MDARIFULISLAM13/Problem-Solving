/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-09-2024
 * time : 02:49:16
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll v;
        cin >> v;
        if (v == 1) {
            cout << "-1\n";
        }
        else {
            cout << 2;
            for (int i = 1;i < v;i++) {
                cout << 3;
            }
            cout << endl;
        }
    }

    return 0;
}