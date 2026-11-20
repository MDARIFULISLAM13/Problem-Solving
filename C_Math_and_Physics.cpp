/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-11
 * Time : 04:12:23
 * Problem Name : C_Math_and_Physics
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
    ll sum = 0;
    bool ok = true;
    vec v(n + 2);
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x > 1)
            ok = false;

        sum += x;
        v[i] = x;
    }

    if (ok)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (v[i] > 1)
            {
                cout << sum - 1 << endl;
                return;
            }
        }
        cout << v[1]+v[n]-1 << endl;
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