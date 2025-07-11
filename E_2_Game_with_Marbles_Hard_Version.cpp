/**
 *
 * Author : Md.Ariful Islam
 * Date : 12-07-2025
 * time : 05:36:51
 * Problem Name : E_1_Game_with_Marbles_Easy_Version
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
    vec v(n);
    vec vv(n);
    vector<pair<ll, pair<ll, ll>>> vc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> vv[i];
        vc[i] = {v[i] + vv[i], {v[i], vv[i]}};
    }
    sort(vc.begin(), vc.end(), [](const pair<ll, pair<ll, ll>> &a, const pair<ll, pair<ll, ll>> &b)
         { return a.first > b.first; });

    ll a = 0, b = 0;

    for (int i = 0; i < n; i++)
    {
        if ((i & 1) == 0)
        {
            a += (vc[i].second.first - 1);
        }
        else
        {
            b += (vc[i].second.second - 1);
        }
    }
    cout << a - b << endl;
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