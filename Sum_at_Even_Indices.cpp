/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-07
 * Time : 20:33:29
 * Problem Name : Sum_at_Even_Indices
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
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i % 2 == 0)
        {
            if (k * 2 < x)
                ans += x;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}