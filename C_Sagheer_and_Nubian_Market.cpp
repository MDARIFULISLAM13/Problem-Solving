/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-05-2025
 * time : 22:30:10
 * Problem Name : C_Sagheer_and_Nubian_Market
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

ll n, s;
vec a;
ll total = 0;
bool can_buy(ll mid)
{
    vec v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = a[i] + ((i + 1) * mid);
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    for (int i = 0; i < mid; i++)
    {
        sum += v[i];
    }
    if (sum > s)
    {
        return false;
    }
    else
    {
        total = sum;
        return true;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        ll v;
        cin >> v;
        a.push_back(v);
    }
    ll l = 0, h = n;
    ll ans = 0;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (can_buy(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout << ans << " " << total << endl;

    return 0;
}