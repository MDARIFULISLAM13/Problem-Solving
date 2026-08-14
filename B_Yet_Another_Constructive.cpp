/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-07-18
 * Time : 21:04:16
 * Problem Name : B_Yet_Another_Constructive
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
    ll n, k, m;
    cin >> n >> k >> m;

    if (k > m)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    ll v = m + 1 - k;

    for (ll i = 1; i <= n; i++)
    {

        if (i % k == 0)
            cout << v << " ";

        else
            cout << 1 << " ";

       
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