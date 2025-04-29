/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-04-2025
 * time : 07:00:30
 * Problem Name : C_Balanced_Team
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
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    ll l = 0, r = 0, ans = 0;
    while (r < n)
    {
        while (a[r] - a[l] > 5) l++;
        ans = max(ans, r - l + 1);
        r++;
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