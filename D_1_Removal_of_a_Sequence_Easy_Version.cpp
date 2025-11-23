/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-14
 * Time : 21:31:39
 * Problem Name : D_1_Removal_of_a_Sequence_Easy_Version
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

ll ck(ll m, ll x, ll y)
{

    for (ll i = 0; i < x; ++i)
    {
        ll rem = m / y;
        m -= rem;
        if (m == 0)
            break;
    }
    return m;
}

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;

    if (ck(1e12, x, y) < k)
    {
        cout << -1 << '\n';
        return;
    }

    ll l = 1, h = 1e12, ans = -1;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (ck(mid, x, y) >= k)
        {
            ans = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
}

int main()
{
#ifdef FELIX
    auto _clock_start = chrono::high_resolution_clock::now();
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
#ifdef FELIX

    cerr << "Executed in " << chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - _clock_start).count() << "ms." << endl;
#endif
    return 0;
}
