/**
 *
 * Author : Md.Ariful Islam
 * Date : 28-04-2025
 * time : 22:56:29
 * Problem Name : B_Move_to_the_End
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
    ll n;
    cin >> n;
    int a[n + 1];
    vec v;
    ll mx = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] >= mx)
        {
            mx = a[i];
            v.push_back(mx);
        }
    }
    ll pre = 0;
    cout << v.back() << " ";
    for (int i = n; i > 1; i--)
    {
        pre += a[i];
        if (a[i] == v.back())
        {
            v.pop_back();
        }
        cout << pre + v.back() << " ";
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
    while (t--)
        solve();

    return 0;
}