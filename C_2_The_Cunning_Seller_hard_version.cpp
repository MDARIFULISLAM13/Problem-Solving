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

ll pw[21], cst[21];

ll cr(ll mx)
{
    return pow(3, (mx + 1)) + (mx * pow(3, (mx - 1)));
}

void solve()
{
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    ll cost = 0;
    ll mx = 19;
    map<int, int> mp;

    while (n != 0)
    {
        while (pw[mx] <= n)
        {
            --k;
            n -= pw[mx];

            cost += cst[mx];
            mp[mx]++;
        }
        --mx;
    }
    if (k < 0)
    {
        cout << -1 << endl;
        return;
    }

    mx = 19;
    while (k >= 2 && mx != 0)
    {
        if (mp[mx] == 0)
        {
            --mx;
            continue;
        }

        ll y = mp[mx];
        ll yy = k / 2;
        y = min(y, yy);

        cost -= (cst[mx] * y);
        mp[mx] -= y;

        mp[mx - 1] += (3 * y);
        ll cs = cst[mx - 1];
        cs *= 3;
        cs *= y;
        cost += cs;
        k -= (2 * y);
    }
    cout << cost << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 0; i < 20; i++)
    {
        pw[i] = pow(3, i);
        ll x = cr(i);
        cst[i] = x;
    }
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
