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
            ll x = i;
            if (mp[i])
            {
                cout << mp[i] << " ";
            }
            else
            {
                x /= 2;
                if (mp[x] == -1 || x == 1)
                {
                    cout << -1 << " ";
                    break;
                }
                else
                {
                    mp[i] = mp[x] + 1;
                    cout << mp[i] << " ";
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