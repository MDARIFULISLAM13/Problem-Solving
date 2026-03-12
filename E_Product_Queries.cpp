/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-01-26
 * Time : 22:58:06
 * Problem Name : E_Product_Queries
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
    ll n;
    cin >> n;
    map<ll, int> mp;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            if (mp[i] == 1)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << -1 << " ";
            }
        }
        else
        {
            if (mp[i])
            {
                cout << mp[i] << " ";
            }
            else
            {
                ll ans = INT_MAX;
                ll x = i;
                for (int j = 2; j * j <= x; j++)
                {
                    if (x % j == 0)
                    {
                        ll c1 = j, c2 = x / j;

                        if (mp[c1] && mp[c2])
                        {
                            ll cnt = mp[c1] + mp[c2];
                            ans = min(ans, cnt);
                        }
                    }
                }

                if (ans == INT_MAX)
                {
                    cout << -1 << " ";
                }
                else
                {
                    cout << ans << " ";
                    mp[i] = ans;
                }
            }
        }
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