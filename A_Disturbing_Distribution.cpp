/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-28
 * Time : 20:37:11
 * Problem Name : A_Disturbing_Distribution
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
    ll cst = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x != 1)
        {
            cst += x;
        }
    }

    if (cst == 0)
    {
        cst = 1;
    }

    cout << cst << endl;
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