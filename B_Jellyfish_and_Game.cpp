/**
 *
 * Author : Md.Ariful Islam
 * Date : 27-12-2024
 * time : 06:59:18
 * Problem Name : B_Jellyfish_and_Game
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
void solve() {
    int n, m;
    cin >> n >> m;
    ll k;
    cin >> k;
    ll v;
    ll mnj = INT_MAX, mxj = 0, mng = INT_MAX, mxg = 0;
    ll sum = 0;
    for (int i = 1;i <= n;i++) {

        cin >> v;
        sum += v;
        if (v < mnj) {
            mnj = v;
        }
        if (v > mxj) {
            mxj = v;
        }
    }
    for (int i = 1;i <= m;i++) {

        cin >> v;
        if (v < mng) {
            mng = v;
        }
        if (v > mxg) {
            mxg = v;
        }
    }
    if (k % 2 == 1) {
        if (mnj < mxg) {

            sum -= mnj;
            sum += mxg;
        }
        cout << sum << endl;
        return;
    }
    else {

        if (mnj < mxg) {

            sum -= mnj;
            sum += mxg;
        }

        mng = min(mnj, mng);

        mxj = max(mxj, mxg);

        if (mng < mxj) {
            sum -= mxj;
            sum += mng;
        }
        cout << sum << endl;
        return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}