/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-10-16
 * Time : 13:14:14
 * Problem Name : A_Perfect_Sandwiches
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
    ll a, b;
    cin >> a >> b;
    if (b >= a)
    {
        cout << -1 << endl;
        return;
    }
    if (b * 2 <= a)
    {
        cout << b << endl;
        return;
    }
    for (int i = 1; i <= b; i++)
    {
        if ((a - (i * 2)) <= b - i)
        {
           
            cout << i  << endl;
            return;
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