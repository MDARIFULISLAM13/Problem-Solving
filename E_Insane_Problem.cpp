/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-06
 * Time : 13:46:22
 * Problem Name : E_Insane_Problem
 *
 **/
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
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{

    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
   
    vec v;
    ll pp = 0;
    while (1)
    {
        ll x = pow(k, pp);
        if (x * l1 > r2)
            break;

        v.push_back(x);
        ++pp;
    }

    ll cnt = 0;
    for (auto p : v)
    {
        if (p * l1 > r2 || p * r1 < l2)
            continue;

        ll low = l1, h = r1;
        ll mx = 0;
        while (low <= h)
        {
            ll mid = (low + h) / 2;

            if (mid * p >= l2 && mid * p <= r2)
            {
                mx = max(mx, mid);
                low = mid + 1;
            }
            else if (mid * p > r2)
            {
                h = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        if (mx != 0)
        {
            if (l1 * p >= l2)
            {
                cnt += abs(mx - l1) + 1;
            }
            else
            {
                low = l1, h = r1;
                ll mnl = r1;
                while (low <= h)
                {
                    ll mid = (low + h) / 2;

                    if (mid * p >= l2 && mid * p <= r2)
                    {
                        mnl = min(mnl, mid);
                        h = mid - 1;
                    }
                    else if (mid * p > r2)
                    {
                        h = mid - 1;
                    }
                    else
                    {
                        low = mid + 1;
                    }
                }
                cnt += abs(mx - mnl) + 1;
            }
        }
    }
    cout << cnt << endl;
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