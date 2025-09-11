/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-08
 * Time : 21:54:33
 * Problem Name : D_Antiamuny_Wants_to_Learn_Swap
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
    ll n, m;
    cin >> n >> m;
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    while (m--)
    {
        ll l, r;
        cin >> l >> r;

        bool flg = true;
        ll val = 0;
        for (int i = l; i <= r - 2; i++)
        {

            if (a[i + 1] < a[i] && a[i + 2] < a[i + 1])
            {
                cout << "NO\n";
                flg = false;
                break;
            }
        }
        if (flg == true)
        {
            cout << "YES\n";
        }
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