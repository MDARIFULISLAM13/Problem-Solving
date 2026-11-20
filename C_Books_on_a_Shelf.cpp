/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-20
 * Time : 13:55:39
 * Problem Name : C_Books_on_a_Shelf
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
    vec v;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (mp[x] < 1)
        {
            v.push_back(x);
        }
        mp[x]++;
    }
    ll cnt = 0;

    sort(v);
    vec vv;
    for (int i = 0; i < v.size(); i++)
    {
        vv.push_back(v[i]);

        ++cnt;
        mp[v[i]]--;
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (mp[v[i]] > 0)
        {

            while (mp[v[i]] > 0)
            {
                mp[v[i]]--;
                vv.push_back(v[i]);
            }
            ++cnt;
        }
    }

    cout << cnt << endl;
    for (auto i : vv)
        cout << i << " ";

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