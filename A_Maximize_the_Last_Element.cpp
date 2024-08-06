/**
 *
 * Author : Md.Ariful Islam
 * Date : 31-07-2024
 * time : 14:39:13
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
        int n;
        cin >> n;

        int mx = 0;
        for (int i = 1;i <= n;i++) {
            int v;
            cin >> v;
            if (i % 2 != 0) {
                mx = max(v, mx);
            }

        }
        cout << mx << endl;
    }

    return 0;
}