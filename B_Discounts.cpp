/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-17
 * Time : 20:40:06
 * Problem Name : B_Discounts
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
    ll n, k;
    cin >> n >> k;
    vec v(n);
    vec vv(k);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < k; i++)
        cin >> vv[i];

    sort(v.begin(), v.end());
    sort(vv.rbegin(), vv.rend());
    ll ans = 0;

    while (!v.empty())
    {
        if (vv.empty())
        {
            while (!v.empty())
            {
                ans += v.back();
                v.pop_back();
            }
        }
        else
        {
            ll x = vv.back();
            vv.pop_back();
            for (int i = 1; i < x; i++)
            {
                if (v.size() == 0)
                {
                    break;
                }
                ans += v.back();
                v.pop_back();
            }
            if (v.size() != 0)
                v.pop_back();
        }
    }

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
        solve();

    return 0;
}