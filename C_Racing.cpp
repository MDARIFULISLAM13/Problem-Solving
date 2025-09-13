/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-13
 * Time : 19:13:26
 * Problem Name : C_Racing
 *
 **/
#ifdef _GNUC_
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

vector<ll> solvee(const vector<ll> &mnv, const vector<ll> &mxv, const vector<ll> &v)
{
    ll n = v.size();
    if (n == 0)
        return {};

    vector<ll> low(n), high(n);

    // first element
    ll low0, high0;
    if (v[0] == 0)
        low0 = high0 = 0;
    else if (v[0] == 1)
        low0 = high0 = 1;
    else
    {
        low0 = 0;
        high0 = 1;
    }

    low[0] = max(low0, mnv[0]);
    high[0] = min(high0, mxv[0]);

    for (int i = 1; i < n; i++)
    {
        ll low_i, high_i;
        if (v[i] == 0)
        {
            low_i = low[i - 1];
            high_i = high[i - 1];
        }
        else if (v[i] == 1)
        {
            low_i = low[i - 1] + 1;
            high_i = high[i - 1] + 1;
        }
        else
        { // -1
            low_i = low[i - 1];
            high_i = high[i - 1] + 1;
        }

        low[i] = max(low_i, mnv[i]);
        high[i] = min(high_i, mxv[i]);
    }

    vector<ll> ans = v;
    ll s = high[n - 1];

    for (int i = n - 1; i >= 1; i--)
    {
        if (ans[i] == -1)
        {
            if (s - 1 >= low[i - 1] && s - 1 <= high[i - 1])
            {
                ans[i] = 1;
                s -= 1;
            }
            else
            {
                ans[i] = 0;
            }
        }
        else
        {
            s -= ans[i];
        }
    }

    if (ans[0] == -1)
        ans[0] = s;

    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    vec v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll mx = 0, mn = 0;
    bool fg = false;
    vec mxv(n), mnv(n);
    for (int i = 0; i < n; i++)
    {
        ll l, h;
        cin >> l >> h;
        if (fg == true)
        {
            continue;
        }
        if (v[i] == -1)
        {
            mx += 1;
        }
        else
        {
            mx += v[i];
            mn += v[i];
        }
        // main logic

        if (mx < l || mn > h)
        {
            fg = true;
            continue;
        }
        if (mn < l)
        {
            mn = l;
        }
        mx = min(mx, h);
        mxv[i] = mx;
        mnv[i] = mn;
    }
    if (fg == true)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = mxv.size() - 2; i >= 0; i--)
    {
        mxv[i] = min(mxv[i], mxv[i + 1]);
    }

    // cout << "mn\n";
    // for (auto i : mnv)
    //     cout << i << " ";
    // cout << "\nMX\n";
    // for (auto i : mxv)
    //     cout << i << " ";
    // cout << endl;

        vector<ll> res = solvee(mnv, mxv, v);
    for (int x : res)
        cout << x << " ";
    cout << "\n";
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