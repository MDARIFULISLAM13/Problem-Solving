/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-10
 * Time : 03:59:56
 * Problem Name : C_Assembly_via_Minimums
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
    set<int> s;
    for (int i = 0; i < (n * (n - 1)) / 2; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
        mp[x]++;
    }

    for (auto i : s)
    {
        while (mp[i] > 0)
        {
            cout << i << " ";
            mp[i] -= (n-1);
            --n;
        }
    }

    while (n--)
    {
        cout << 1000000000
             << " ";
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