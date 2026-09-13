/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-09
 * Time : 20:37:00
 * Problem Name : Coin_Mining
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

    ll day = 1e9;

    ll x, y;
    cin >> x >> y;
    ll cpu = 0;
    ll cost = 0;
    ll sum = 0;
    for (ll i = 1; i <= 1000; i++)
    {

        cost += x;
        ll cr = y * i * i;
        sum += cr;
        if (sum > cost)
        {
            day = min(day, i);
        }
        ll crr = 0;
        for (ll j = i + 1; j <= 1000; j++)
        {
            crr += cr;
            if (sum + crr > cost)
            {
                day = min(day, j);
            }
        }
    }

    cout<<day<<endl;
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