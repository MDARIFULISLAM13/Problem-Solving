

/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-09
 * Time : 22:02:43
 * Problem Name : C_Ultimate_Value
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

const ll INF = 4e18;

void solve()
{
    int n;
    cin >> n;
    vec a(n);
    ll fsc = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
        {
            fsc += a[i];
        }
        else
        {
            fsc -= a[i];
        }
    }

    ll mxc = 0;

    ll mn = INF;
    for (int k = 0; k < n; ++k)
    {
        if (k % 2 == 0)
        {
            mn = min(mn, 2 * a[k] + k);
        }
        else
        {
            if (mn != INF)
            {
                ll cr = (2 * a[k] + k) - mn;
                mxc = max(mxc, cr);
            }
        }
    }

    ll mxcc = -INF;
    for (int k = 0; k < n; ++k)
    {
        if (k % 2 != 0)
        {
            mxcc = max(mxcc, 2 * a[k] - k);
        }
        else
        {
            if (mxcc != -INF)
            {
                ll cr = mxcc - (2 * a[k] - k);
                mxc = max(mxc, cr);
            }
        }
    }

    if (n > 1)
    {
        ll s;
        if (n % 2 != 0)
        {
            s = (ll)n - 1;
        }
        else
        {
            s = (ll)n - 2;
        }

        mxc = max(mxc, s);
    }

    cout << fsc + mxc << "\n";
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