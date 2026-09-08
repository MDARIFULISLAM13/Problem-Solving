/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-08
 * Time : 21:00:40
 * Problem Name : Maximize_XOR_Minimize_Operations
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

    ll x, y;
    cin >> x >> y;
    cout << x + y << " ";

    ll mx = x + y;
    ll mn = 0;

    for (int i = 30; i >= 0; i--)
    {
        if ((mx >> i) & 1)
        {
            if (mn + (1LL << i) <= x)
            {
                mn += (1LL << i);
            }
        }
    }

    cout << (x - mn) << "\n";
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