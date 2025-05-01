/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-05-2025
 * Time : 20:10:19
 * Problem Name : B_Burning_Midnight_Oil
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, k;

bool ok(ll mid)
{
    ll total = 0;
    ll cur = 1;
    while (mid / cur > 0)
    {
        total += mid / cur;
        cur *= k;
    }
    return total >= n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    ll l = 1, h = 1e9+123, ans = 0;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (ok(mid))
        {
            ans = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << '\n';

    return 0;
}
