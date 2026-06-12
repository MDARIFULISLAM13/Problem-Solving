/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-18
 * Time : 20:36:21
 * Problem Name : A_Optimal_Purchase
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
    ll a, b, c;
    cin >> a >> b >> c;

    if (b * 3 <= c)
    {
        cout << a * b << endl;
    }
    else
    {
        ll x = a % 3;

        a-=x;
        a/= 3;
        ll ans = a * c;

        ll y = x * b;
        ans += min(y, c);

        cout << ans << endl;
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