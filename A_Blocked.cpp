/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-13
 * Time : 20:39:33
 * Problem Name : A_Blocked
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
    vec v(n);
    map<ll, bool> mp;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (mp[v[i]] == true)
        {
            ok = true;
        }
        mp[v[i]] = true;
    }
    if (ok)
    {
        cout << -1;
    }
    else
    {
        sort(v);
        rev(v);
        for(auto i : v)
            cout << i << " ";
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