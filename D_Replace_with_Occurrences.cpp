/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-10
 * Time : 22:58:41
 * Problem Name : D_Replace_with_Occurrences
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
    map<int, int> mp;
    vec v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll cnt = 1;
    map<int, vector<pair<int, int>>> mmp;
    for (auto i : mp)
    {
        if (i.second % i.first != 0)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            ll x = i.second;
            while (x > 0)
            {
                x -= i.first;
                mmp[i.first].push_back({cnt, i.first});
                ++cnt;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        pair<int, int> &last = mmp[v[i]].back();
        cout << last.first << " ";
        --last.second;
        if (last.second == 0)
        {
            mmp[v[i]].pop_back();
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
