/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-22
 * Time : 02:00:19
 * Problem Name : D_Game_on_Array
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
// #define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    vector<pair<ll, ll>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(),
         [](const pair<ll, ll> &a, const pair<ll, ll> &b)
         {
             if (a.second != b.second)
                 return a.second > b.second;
             return a.first > b.first;
         });

    vector<vector<ll>> g;
    vec temp;
    ll cnt = -1;
    for (auto i : v)
    {

        if (cnt != i.second)
        {
            if (cnt == -1)
            {
                cnt = i.second;
                temp.push_back(i.first);
            }
            else
            {
                g.push_back(temp);
                temp.clear();
                cnt = i.second;
                temp.push_back(i.first);
            }
        }
        else
        {
            temp.push_back(i.first);
        }
    }

    if (!temp.empty())
    {
        g.push_back(temp);
    }

    ll cnt1 = 0, cnt2 = 0;
    ll cn = true;
    for (auto &row : g)
    {
        ll add = 0;
        for (auto it = row.begin(); it != row.end(); ++it)
        {

            ll cr = *it;
            if (cr % 2 == 0)
            {
                ll x = cr / 2;
                x *= mp[cr];
                cnt1 += x;
                cnt2 += x;
            }
            else
            {
                ll x = cr / 2;
                x *= mp[cr];
                cnt1 += x;
                cnt2 += x;

                if (cn == true)
                {
                    cn = false;
                    cnt1 += mp[cr];
                }
                else
                {
                    cn = true;
                    cnt2 += mp[cr];
                }
            }
            // cout << cr << " " << add << endl;
        }
    }

    cout << cnt1 << " " << cnt2 << endl;
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