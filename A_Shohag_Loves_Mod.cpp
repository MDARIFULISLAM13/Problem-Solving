/**
 *
 * Author : Md.Ariful Islam
 * Date : 23-11-2024
 * time : 20:40:14
 * Problem Name : A_Shohag_Loves_Mod
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

        int n;
        cin >> n;
        int cr = 0;
        int cnt = 2;
        cout << 1 << " ";
        for (int i = 2;i <= n;i++) {
            while (cnt % i != cr + 1) {
                cnt++;
            }
            cout << cnt << " ";
            cr++;

        }
        cout << endl;

    }

    return 0;
}