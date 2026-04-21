/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-21
 * Time : 21:46:04
 * Problem Name : D_Exceptional_Segments
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
    ll n, x;
    cin >> n >> x;

    for (int i = 1; i <= x; i++)
    {
        ll s = i + 3;
        if (i == 1)
        {
            s = 3;
        }

        ll y = x % 4;

        while (y != 3)
        {
            ++y;
            
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