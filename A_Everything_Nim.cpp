/**
 *
 * Author : Md.Ariful Islam
 * Date : 16-07-2025
 * time : 09:19:42
 * Problem Name : A_Everything_Nim
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
    ll n;
    cin >> n;
    vec a;
    map<int, bool> mp;
    for (int i = 1; i <= n; i++)
    {
        ll v;
        cin >> v;
        if (mp[v] == 0)
        {
            mp[v] = 1;
            a.push_back(v);
        }
    }
    a.push_back(0);
    sort(a.begin(), a.end());
    ll s = a.size();

    ll pre = a[0];
    ll cr = a[0];
    for (int i = 1; i < s; i++)
    {
        cr = a[i];
        a[i] = a[i] - pre;
        pre = cr;
    }

    a[s - 1] = 1;

    for (int i = 1; i < s; i++)
    {
        if (a[i] > 1)
        {
            if (i % 2 == 0)
            {
                cout << "Bob\n";
                return;
            }
            else
            {
                cout << "Alice\n";
                return;
            }
        }
    }

    --s;
    if (s % 2 == 0)
    {
        cout << "Bob\n";
        return;
    }
    else
    {
        cout << "Alice\n";
        return;
    }
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