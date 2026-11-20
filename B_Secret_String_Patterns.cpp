/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-07
 * Time : 20:52:08
 * Problem Name : B_Secret_String_Patterns
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    if (!(cin >> n))
        exit(0);

    cout << "? 1 " << n << "\n";
    cout.flush();

    ll x;
    cin >> x;
    if (x == -1)
        exit(0);

    if (x == 0 || x == n)
    {
        cout << "! NO\n";
    }
    else
    {
        cout << "? 1 " << x << "\n";
        cout.flush();

        ll y;
        cin >> y;
        if (y == -1)
            exit(0);
        if (y == x)
        {
            cout << "! NO\n";
        }
        else
        {
            cout << "! YES\n";
        }
    }

    cout.flush();
}

int main()
{

    int t;
    if (cin >> t)
    {
        while (t--)
            solve();
    }

    return 0;
}