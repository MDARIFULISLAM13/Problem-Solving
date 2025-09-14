/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-14
 * Time : 17:09:58
 * Problem Name : C_1_The_Cunning_Seller_easy_version
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
#define rsort(a) sort(a.rbegin(), a.rend());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));
ll cr(ll mx)
{
    return pow(3, (mx + 1)) + (mx * pow(3, (mx - 1)));
}
void solve()
{
    ll n;
    cin >> n;
    ll cost = 0;
    ll mx = 19;

    while (n != 0)
    {
        while (pow(3, mx) <= n)
        {
            n -= pow(3, mx);

            cost += cr(mx);
        }
        --mx;
    }

    cout << cost << endl;
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