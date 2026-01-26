/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-01-23
 * Time : 20:44:47
 * Problem Name : A_Table_with_Numbers
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
    ll n, h, l;
    cin >> n >> h >> l;

    ll ansh = 0, ansl = 0, hx = 0;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x <= h && x <= l)
        {
            hx++;
        }
        else if (x <= h)
        {
            ansh++;
        }
        else if (x <= l)
        {
            ansl++;
        }
    }

    while (hx != 0)
    {
        if (ansh < ansl)
        {
            ansh++;
            --hx;
        }
        else
        {
            ansl++;
            --hx;
        }
    }

    cout << min(ansh, ansl) << endl;
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