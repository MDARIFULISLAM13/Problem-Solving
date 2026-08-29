/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-29
 * Time : 21:02:06
 * Problem Name : B_2_Carrot_Chopdown_Hard_Version
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
    ll n, m;
    cin >> n >> m;
    vec a(m + 1, 0);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
    }

    vec pre(m + 2, 0);
    for (int i = m; i >= 1; i--)
    {
        pre[i] = a[i] + pre[i + 1];
    }

    
    ll mxr = min(m, 18LL);
    ll ans = 0;
    for (int l = 1; l <= mxr; l++)
    {
        ans = 0;

        ll ind = -1;
        ll p = pow(2, l);

        for (int i = 1; i <= m; i++)
        {
            ll x = 0;

            for (ll j = 1; j < p; j++)
            {
                if (j * i <= m)
                {
                    x += pre[j * i];
                }
                else
                {
                    break;
                }
            }

            if (p * i <= m)
            {
                x += a[p * i];
            }

            if (ans < x)
            {
                ans = x;
                ind = i;
            }
        }
        cout << ans << " ";
    }

    for (int k = mxr + 1; k <= m; k++)
    {
        cout << ans << " ";
    }
    cout << endl;
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