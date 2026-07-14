/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-06-19
 * Time : 18:41:57
 * Problem Name : K_Diagonal_Shortcuts
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
    ll x, k;
    cin >> x >> k;

    if (x == 2)
    {
        cout << min(k, 1ll * 4) << endl;
        return;
    }

    x += 2;
    x /= 3;
    x *= 2;
    cout << min(k, 1ll * x) << endl;
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