/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-06-09
 * Time : 20:52:35
 * Problem Name : B_Different_Distances
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

    ll x = 0;
    while (1)
    {
        if (n == x)
            break;

        if (x + 3 == n)
        {
            cout << x + 1 << " " << x + 1 << " " << x + 2 << " " << x + 1 << " " << x + 2 << " " << x + 3 << " " << x + 1 << " " << x + 3 << " " << x + 2 << " " << x + 2 << " " << x + 3 << " " << x + 3 << " ";

            x += 3;
        }
        else
        {

            cout << x + 1 << " " << x + 2 <<" "<< x + 2 << " " << x + 1 << " " << x + 1 << " " << x + 2 << " " << x + 1 << " " << x + 2 << " ";
            x += 2;
        }
    }

    cout << endl;
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