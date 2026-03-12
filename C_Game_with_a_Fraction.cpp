/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-02-11
 * Time : 21:46:10
 * Problem Name : C_Game_with_a_Fraction
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
    ll a, b;
    cin >> a >> b;

    if (3 * a == 2 * b)
    {
        cout << "Bob\n";
    }
    else if (3 * a < 2 * b)
    {
        cout << "Alice\n";
    }
    else
    {
        if (a < b)
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Alice\n";
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