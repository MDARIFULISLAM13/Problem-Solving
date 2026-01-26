/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-01-23
 * Time : 21:13:28
 * Problem Name : B_The_Curse_of_the_Frog
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
    ll n, x;
    cin >> n >> x;

    ll t = 0;
    ll mx = -2e18;

    while (n--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        t += (b - 1) * a;

        ll v = (a * b) - c;
        if (v > mx)
        {
            mx = v;
        }
    }

    if (t >= x)
    {
        cout << 0 << endl;
        return;
    }
     if (mx <= 0)
    {
        cout << -1 << endl;
        return;
    }
   
        ll ex = x - t;
        ll ans = (ex + mx - 1) / mx;
        cout << ans << endl;
    
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