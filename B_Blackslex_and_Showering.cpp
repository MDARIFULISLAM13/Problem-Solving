/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-12-23
 * Time : 20:52:33
 * Problem Name : B_Blackslex_and_Showering
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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll mx = 0;
    for (int i = 1; i < n; i++)
    {
        mx += abs(v[i] - v[i - 1]);
    }

    ll mn = mx;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            ll cr = mx - abs(v[i] - v[i + 1]);
            mn = min(cr, mn);
        }
        else if (i == (n - 1))
        {
            ll cr = mx - abs(v[i] - v[i - 1]);
            mn = min(cr, mn);
        }
        else
        {

            ll t1 = abs(v[i] - v[i - 1]);
            ll t2 = abs(v[i] - v[i + 1]);
            ll t3 = abs(v[i - 1] - v[i + 1]);

            ll cr = (mx + t3) - (t1 + t2);

            mn = min(cr, mn);
        }
    }

    cout << mn << endl;
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