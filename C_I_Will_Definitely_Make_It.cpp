/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-07-2025
 * time : 20:45:23
 * Problem Name : C_I_Will_Definitely_Make_It
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
#define mem(dp, i) memset(dp, i, sizeof(dp));
void solve()
{
    ll n, k;
    cin >> n >> k;
    vec v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll fst = v[k - 1];
    vec a;
    map<int, int> mp;
    for (auto i : v)
    {
        if (mp[i] < 1 && i > fst)
        {
            a.push_back(i);
            mp[i]++;
        }
    }
    ll w = 1;
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    while (!a.empty())
    {

        ll val = abs(fst - a.back());
        val--;
        w += val;
        if (w > fst)
        {
            cout << "NO\n";
            return;
        }
        w++;
        fst = a.back();
        a.pop_back();
    }
    cout << "YES\n";
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