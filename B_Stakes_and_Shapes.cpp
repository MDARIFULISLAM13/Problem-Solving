/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-11
 * Time : 04:03:09
 * Problem Name : B_Stakes_and_Shapes
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
    ll a, b, c;
    cin >> a >> b >> c;
    ll sum = a + b + c;
    ll mx = max(a, max(b, c));
    if (a == mx)
    {
        for (int i = 1; i <= sum; i++)
        {
            cout << 'P';
        }
        cout << endl;
    }
    else if (b == mx)
    {
        for (int i = 1; i <= sum; i++)
        {
            cout << 'R';
        }
        cout << endl;
    }
    else if (c == mx)
    {
        for (int i = 1; i <= sum; i++)
        {
            cout << 'S';
        }
        cout << endl;
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