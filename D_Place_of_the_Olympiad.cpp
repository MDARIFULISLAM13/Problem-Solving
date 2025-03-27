/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-03-2025
 * time : 04:36:27
 * Problem Name : D_Place_of_the_Olympiad
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
#define mem(dp, i) memset(dp, i, sizeof(dp));
void arif()
{
    ll n, m, k;
    cin >> n >> m >> k;
    if (n * m == k)
    {
        cout << m << endl;
        return;
    }
    ll v = 0;
    v = k / n;
    if (n >= k)
    {
        cout << 1 << endl;
        return;
    }
    if (k % n != 0)
    {
        v += 1;
    }

    ll c = 0;
    c = m - v;

    c += 1;
    if (c >= v)
    {
        cout << 1 << endl;
        return;
    }

    ll ans = 0;
    if (c == 0)
    {
        c = 1;
    }
    ans = v / c;
    if (v % c != 0)
    {
        ans += 1;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        arif();
    }

    return 0;
}