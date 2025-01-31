/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-02-2025
 * time : 00:07:47
 * Problem Name : D_Permutation_Transformation
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
map<int, int>mp;

void calcu(vec a, int pre) {
    int mx = 0;
    int mxi = 0;
    for (int i = 0;i < a.size();i++) {

        if (a[i] > mx) {
            mx = a[i];
            mxi = i;
        }
    }
    mp[mx] = pre + 1;

    vec b, c;
    for (int i = 0;i < mxi;i++) {
        b.push_back(a[i]);
    }
    for (int i = a.size() - 1;i > mxi;i--) {
        c.push_back(a[i]);
    }
    if (b.size() != 0) {
        calcu(b, pre + 1);
    }
    if (c.size() != 0) {
        calcu(c, pre + 1);
    }

}

void solve() {

    mp.clear();
    int n;

    cin >> n;
    vec a(n);
    int mx = 0;
    int mxi = 0;
    for (int i = 0;i < n;i++) {
        cin >> a[i];
        if (a[i] > mx) {
            mx = a[i];
            mxi = i;
        }


    }

    calcu(a, -1);

    for (int i : a) {
        cout << mp[i] << " ";
    }
    cout << endl;
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