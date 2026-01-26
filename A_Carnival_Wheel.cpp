/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-12-19
 * Time : 20:40:19
 * Problem Name : A_Carnival_Wheel
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
    int l, a, b;
    cin >> l >> a >> b;
    int g = __gcd(l, b);
    int ans = a + g * ((l - 1 - a) / g);
    cout << ans << '\n';
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