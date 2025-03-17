/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-03-2025
 * time : 21:11:43
 * Problem Name : C_Two_Colors
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
    vec a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    ll pre[m];
    pre[0] = a[0];
    for (int i = 1; i < m; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }

    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        ll x = n  - a[i];
        int l = 0, h = m - 1;
        int ind = -1;
        while (l <= h)
        {
            int mid = l + h;
            mid /= 2;
            if (a[mid] >= x)
            {
                l = mid + 1;
                ind = mid;
            }
            else
            {
                h = mid - 1;
            }
        }
        if (ind != -1)
        {
            ll xx = pre[ind];
            ind++;
            if (a[i] > x)
            {
                xx -= a[i];
                ind--;
            }
         
            ans += xx - (ind * x);
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
    {
        solve();
    }

    return 0;
}
