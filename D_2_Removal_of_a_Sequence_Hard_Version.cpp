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
    if (y == 1)
    {
        return (x == 0) ? m : 0;
    }
    while (x > 0)
    {
        ll q = m / y;
        if (q == 0)
        {
            break;
        }

        ll k = (m % y) / q + 1;

        if (k > x)
        {
            m -= x * q;
            x = 0;
        }
        else
        {
            m -= k * q;
            x -= k;
        }
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}