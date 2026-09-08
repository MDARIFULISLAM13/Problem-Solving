/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-08
 * Time : 20:46:02
 * Problem Name : Monocarp_and_Projects
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

    ll sum = 0;
    ll x = b - a;
    ll y = -1;
    for (int i = 0; i < c; i++)
    {
        sum += (b + i) % (a + i);
        if ((b + i) % (a + i) == x)
        {
            y = i + 1;
            break;
        }
    }
    if (y != -1)
    {
        y = c - y;
         sum += (y * x);
    }

   
    cout << sum << endl;
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