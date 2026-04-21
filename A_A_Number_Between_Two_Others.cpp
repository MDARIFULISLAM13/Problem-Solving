/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-21
 * Time : 20:36:34
 * Problem Name : A_A_Number_Between_Two_Others
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
    ll x, y;
    cin >> x >> y;
    ll z = y;

    while (1)
    {
        z -= x;

        if (z <= 0)
        {
            break;
        }
        if (y % z != 0)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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