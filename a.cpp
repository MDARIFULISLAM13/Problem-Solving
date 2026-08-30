/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-30
 * Time : 17:05:51
 * Problem Name : a
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
    vec v(n), vv(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        vv[i] = v[i];
    }
    sort(vv);
    rev(vv);

    for (int i = 0; i < n; i++)
    {
        if (v[i] != vv[0])
        {
            cout << v[i] * vv[0] << " ";
        }
        else
        {
            if (mp[v[i]] > 1)
            {
                cout << v[i] * vv[0] << " ";
            }
            else
            {
                cout << v[i] * vv[1] << " ";
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}