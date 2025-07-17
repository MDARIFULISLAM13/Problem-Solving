/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-07-2025
 * time : 06:18:09
 * Problem Name : E_Klee_s_SUPER_DUPER_LARGE_Array
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


ll sum(ll a, ll b)
{
    return (b - a + 1) * (a + b) / 2;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    --n;
    n += k;

    ll v = 1e18;
    ll l = k, h = n;

    while (l <= h)
    {
        ll mid = (l + h) / 2;
        ll ksum = sum(k, mid);
        ll nsum = sum(mid + 1, n);

        ll kksum =sum(k, mid - 1);
        ll nnsum = sum(mid, n);
        ll mn = min(abs(nsum - ksum), abs(nnsum - kksum));
        v = min(mn, v);
        
        if (ksum < nsum)
            l = mid + 1;
        else
            h = mid - 1;
    }

    cout << v << '\n';
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
