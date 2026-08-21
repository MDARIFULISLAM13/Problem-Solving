/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-20
 * Time : 19:49:58
 * Problem Name : B_Maximum_Product
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n;
    cin >> n;
    vec v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (n == 5)
    {
        ll x = v[0];
        for (int i = 1; i < n; i++)
            x *= v[i];

        cout << x << endl;
        return;
    }

    sort(v);
    if (v.back() < 1)
    {
        ll x = 1;
        ll cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (cnt == 5)
                break;

            ++cnt;
            x *= v[i];
        }

        cout << x << endl;
        return;
    }
    vec vv;

    ll a1 = 0, b1 = 0;
    if (v[0] < 0 && v[1] < 0)
    {
        a1 = v[0] * v[1];
    }
    if (v[2] < 0 && v[3] < 0)
    {
        b1 = v[2] * v[3];
    }
    rev(v);

    ll x = 0;
    for (int i = 0; i < n;)
    {
        if (x >= 5)
            break;

        if (vv.empty())
        {
            vv.push_back(v[i]);
            ++x;
            ++i;
            continue;
        }
        else
        {
            ll y = v[i] * v[i + 1];
            ll z = max(a1, b1);
            if (z > y)
            {
                vv.push_back(z);
                x += 2;

                if (a1 == z)
                    a1 = -1;
                else
                    b1 = -1;

                continue;
            }
            else
            {
                vv.push_back(y);
                x += 2;
                i += 2;
            }
        }
    }
    x = 1;
    for (auto i : vv)
        x *= i;
    cout << x << endl;
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