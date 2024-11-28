/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-11-2024
 * time : 13:38:55
 * Problem Name : B_Bowling_Frame
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

long long findIndex(long long x) {
    long long low = 1, high = sqrt(2.0 * x) + 1, ans = 0;
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long T_mid = (mid * (mid + 1)) / 2;
        if (T_mid <= x) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
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
        ll x, y;
        cin >> x >> y;
        x += y;
        cout << findIndex(x) << endl;
    }

    return 0;
}