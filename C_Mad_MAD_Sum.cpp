/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-06
 * Time : 12:43:11
 * Problem Name : C_Mad_MAD_Sum
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
    vec v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    ll mad = 0;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
        if (mp[v[i]] >= 2)
        {
            mad = max(v[i], mad);
        }
        v[i] = mad;
    }
    ll nsum = 0;
    reverse(v.begin(), v.end());

    while (!v.empty() && v.back() == 0)
    {
        v.pop_back();
    }
    reverse(v.begin(), v.end());
    for (auto i : v)
    {
        nsum += i;
    }
    sum += nsum;
    mp.clear();
    mad = 0;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
        if (mp[v[i]] >= 2)
        {
            mad = max(v[i], mad);
        }
        v[i] = mad;
    }
    reverse(v.begin(), v.end());

    while (!v.empty() && v.back() == 0)
    {
        v.pop_back();
    }
    reverse(v.begin(), v.end());
    nsum = 0;
    for (auto i : v)
    {
        nsum += i;
    }
    sum += nsum;

    while (!v.empty())
    {
        nsum -= v.back();
        v.pop_back();
        sum += nsum;
    }

    cout << sum << endl;
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
