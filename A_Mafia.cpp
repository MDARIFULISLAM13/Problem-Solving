/**
 *
 * Author : Md.Ariful Islam
 * Date : 02-05-2025
 * time : 12:22:41
 * Problem Name : A_Mafia
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
ll n;
vec a;

bool ok(ll mid)
{
    ll ex = 0;
    for (ll i : a)
    {
        ex += (mid - i);
    }

    if (ex >= mid)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    ll l = a.back(), h = a.back() * 3;

    ll ans = h;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (ok(mid))
        {
            ans = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans;

    return 0;
}