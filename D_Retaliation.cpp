/**
 *
 * Author : Md.Ariful Islam
 * Date : 08-06-2025
 * time : 21:41:40
 * Problem Name : D_Retaliation
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
#define vec vector<ll>
#define mem(dp, i) memset(dp, i, sizeof(dp));

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vec a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll ny = 2 * a[0] - a[1], d = n + 1;
        if (ny % d != 0)
        {
            no continue;
        }
        ll y = ny / d;
        ll x = a[0] - y * n;
        if (x < 0 || y < 0)
        {
            no continue;
        }

        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            ll exp = x * (i + 1) + y * (n - i);
            if (a[i] != exp)
            {
                ok = false;
                break;
            }
        }

        if (ok)
            yes else no
    }

    return 0;
}
