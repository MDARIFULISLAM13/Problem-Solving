/**
 *
 * Author : Md.Ariful Islam
 * Date : 31-03-2025
 * time : 22:16:45
 * Problem Name : C_Asuna_and_the_Mosquitoes
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
    vec e, o;
    for (ll i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        if (v % 2 == 0)
        {
            e.push_back(v);
        }
        else
        {
            o.push_back(v);
        }
    }
    sort(e.begin(), e.end());
    sort(o.rbegin(), o.rend());
    if (e.empty())
    {
        cout << o[0] << endl;
        return;
    }
    if (o.empty())
    {
        cout << e.back() << endl;
        return;
    }
    ll ans = 0;
    ll i = 0;
    while (!e.empty())
    {
        ans += e.back() - 1;
        o.push_back(1);
        e.pop_back();
        ans += o[i];
        i++;
    }
    ans += o[i];
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}