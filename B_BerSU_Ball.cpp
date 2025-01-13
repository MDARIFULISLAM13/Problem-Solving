/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-01-2025
 * time : 01:02:04
 * Problem Name : B_BerSU_Ball
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

    int b;
    cin >> b;
    map<int, int>mb;
    for (int i = 0;i < b;i++) {
        int v;
        cin >> v;
        mb[v]++;
    }
    int g;
    cin >> g;
    map<int, int>mg;
    for (int i = 0;i < g;i++) {
        int v;
        cin >> v;
        mg[v]++;
    }
    int cnt = 0;
    for (int i = 0;i <= 100;i++) {
        while (mb[i] != 0) {
            if (mg[i - 1] > 0) {
                mg[i - 1]--;
                mb[i]--;
                ++cnt;
            }
            else if (mg[i] > 0) {
                mg[i]--;
                mb[i]--;
                ++cnt;
            }
            else if (mg[i + 1] > 0) {
                mg[i + 1]--;
                mb[i]--;
                ++cnt;
            }
            else {
                break;
            }

        }
    }
    cout << cnt;

    return 0;
}