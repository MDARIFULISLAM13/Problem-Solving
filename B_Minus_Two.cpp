/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-05
 * Time : 20:55:55
 * Problem Name : B_Minus_Two
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

    ll a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 != 0)
        {
            ++a;
        }
        else
        {
            ll y = x / 2;
            if (y % 2 == 0)
            {
                ++b;
            }
            else
            {
                ++c;
            }
        }
    }

    cout << max(a, max(b, c)) << endl;
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