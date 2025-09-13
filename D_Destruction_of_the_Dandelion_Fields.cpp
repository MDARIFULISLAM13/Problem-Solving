/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-13
 * Time : 20:54:39
 * Problem Name : D_Destruction_of_the_Dandelion_Fields
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
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n;
    cin >> n;
    vec v, vv;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            v.push_back(x);
        }
        else
        {
            vv.push_back(x);
        }
    }
    if (vv.empty())
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        ll ans = 0;
        for (auto i : v)
            ans += i;

        sort(vv);
        ans += vv.back();
        vv.pop_back();
        reverse(vv.begin(), vv.end());
        vv.pop_back();

        ll d = (vv.size() + 1) / 2;
        for (int i = 0; i < d; i++)
        {
            ans += vv[i];
        }
        cout << ans << endl;
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