/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-02-11
 * Time : 20:39:50
 * Problem Name : A_Friendly_Numbers
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
#define ull unsigned ll
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));
void solve()
{
    ll x;
    cin >> x;

    int cnt = 0;

    for (ll i = x; i <= x + 1000; i++)
    {
        ll sum = 0;
        ll n = i;

        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }

        if (i - sum == x)
        {
            cnt++;
        }
    }

    cout << cnt << "\n";
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