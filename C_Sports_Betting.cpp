/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-05
 * Time : 18:42:57
 * Problem Name : C_Sports_Betting
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
void solve()
{
    ll n;
    cin >> n;
    vec v;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (!mp[x])
            v.push_back(x);
        mp[x]++;
    }

    sort(v);

    for (int i = 0; i < v.size(); i++)
    {
        if (mp[v[i]] >= 4)
        {
            cout << "YES\n";
            return;
        }

        if (i + 1 < v.size() && v[i] + 1 == v[i + 1] && mp[v[i]] >= 2 && mp[v[i + 1]] >= 2)
        {
            cout << "YES\n";
            return;
        }

        if (mp[v[i]] >= 2)
        {
            int j = i + 1;
            while (j < v.size() && v[j] == v[j - 1] + 1 && mp[v[j]] >= 1)
            {
                if (mp[v[j]] >= 2)
                {
                    cout << "YES\n";
                    return;
                }
                j++;
            }

            i = j - 1;
        }
    }
    cout << "NO\n";
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
