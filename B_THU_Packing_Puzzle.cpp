/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-10
 * Time : 05:29:22
 * Problem Name : B_THU_Packing_Puzzle
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
    ll t, h, u;
    cin >> t >> h >> u;
    ll ans = 0;
    ll x = min(t, u);
    t -= x;
    u -= x;
    x *= 4;
    ans += x;

    if (h > 0 && t > 1)
    {
        x = min(h, t / 2);

        t -= (x + x);
        h-=x;
        x *= 7;
        ans += x;
    }
    x = min(t, h);
    t -= x;
    h -= x;
    x *= 5;
    ans += x;
    x = h + u;
    x *= 3;
    ans += x;
    if (t != 0)
    {
        --t;
        ans += 3;
        ans += (t * 2);
    }
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