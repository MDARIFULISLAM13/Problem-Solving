/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-04-2025
 * time : 21:03:16
 * Problem Name : C_Cherry_Bomb
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
    vec a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll mx = 0;
    bool f = 0;
    bool ok = 0;
    int mnp = 0;
    bool y = 0;
    ll mxp = 0;
    bool go = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] != -1)
        {
            if (f != 0)
            {
                if (a[i] + b[i] != mx)
                    ok = 1;
            }
            else
            {
                mx = a[i] + b[i];
                f = 1;
            }
        }
        else
        {
            go = 1;
            int v = a[i] + k;
            if (y == 0)
            {
                mnp = v;
                y = 1;
            }
            else
            {
                mnp = min(v, mnp);
            }
            mxp = max(mxp, a[i]);
        }
    }
    if (ok == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (f == 1)
    {
        if (mnp < mx && go == 1)
        {
            cout << 0 << endl;
            return;
        }
        if (mxp > mx && go == 1)
        {
            cout << 0 << endl;
            return;
        }
        cout << 1 << endl;
        return;
    }

    ll L = *max_element(a.begin(), a.end());
    ll R = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        R = min(R, a[i] + k);
    }
    if (R < L)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << R - L + 1 << endl;
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
    {
        solve();
    }

    return 0;
}
