/**
 *
 * Author : Md.Ariful Islam
 * Date : 27-12-2024
 * time : 23:16:32
 * Problem Name : B_Routine_Problem
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

    ft a, b, c, d;
    cin >> a >> b >> c >> d;
    ft x = a / b;
    ft y = c / d;
    ft ans = min(x, y) / max(x, y);
    ans = (1 - ans);
    for (float j = 0;j <= 99999;j++) {


        for (ft i = 1;i <= 99999;i++) {
            ft val = j / i;
            if (fabs(val - ans) < 1e-9) {
                cout << j << "/" << i;
                return 0;
            }
        }
    }
    return 0;
}