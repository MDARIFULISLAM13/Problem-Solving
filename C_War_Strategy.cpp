/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-01-07
 * Time : 21:48:04
 * Problem Name : C_War_Strategy
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

bool ck(ll mid, ll l, ll r, ll m)
{
    if (mid <= 0)
        return true;

    ll mn = 0;
    if (mid - r > 0)
    {
        mn = mid - r;
    }
    ll mx = min(mid, l);

    if (mn > mx)
        return false;

    ll ans1 = max(mn, min(mx, mid / 2));
    ll ans2 = mid - ans1;

    return (mid + max(ans1, ans2) - 1) <= m;
}

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll l = abs(1 - k), r = abs(n - k);

    ll low = 0, high = n - 1;

    ll ans = 0;

    while (low <= high)
    {

        ll mid = (low + high) / 2;
        if (ck(mid, l, r, m))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << ans + 1 << "\n";
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