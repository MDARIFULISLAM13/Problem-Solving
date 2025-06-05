/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-06-2025
 * time : 21:19:07
 * Problem Name : A_Energy_Crystals
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
#define mem(dp, i) memset(dp, i, sizeof(dp));
void solve()
{
    int x;
    cin >> x;
    vector<int> v = {x, x, x};
    int cnt = 0;
    while (v.back() != 0)
    {
        ++cnt;
        v.back() = v[1] / 2;
        sort(v.begin(), v.end());
    }
    cout << cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}