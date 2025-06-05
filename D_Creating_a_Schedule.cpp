/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-06-2025
 * time : 21:48:20
 * Problem Name : D_Creating_a_Schedule
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

    ll n, m;
    cin >> n >> m;
    vec v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    ll mx = v.back();
    v.pop_back();
    ll ind = 0;
    ll mn = v[ind];
    ++ind;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            cout << mx << " " << mn << " " << mx << " " << mn << " " << mx << " " << mn << "\n";
        }
        else
        {

            cout << mn << " " << mx << " " << mn << " " << mx << " " << mn << " " << mx << "\n";

            mx = v.back();
            v.pop_back();
            mn = v[ind];
            ++ind;
        }
    }
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