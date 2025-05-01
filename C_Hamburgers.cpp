/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-05-2025
 * time : 15:28:36
 * Problem Name : C_Hamburgers
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
ll nb, ns, nc;
ll pb, ps, pc;
ll r;
ll b = 0, c = 0, s = 0;
bool ok(ll mid)
{

    ll need_b = mid * b;
    ll need_c = mid * c;
    ll need_s = mid * s;
    ll money = r;
    if (need_b > nb)
    {
        money -= ((need_b - nb) * pb);
    }
    if (need_s > ns)
    {
        money -= ((need_s - ns) * ps);
    }
    if (need_c > nc)
    {
        money -= ((need_c - nc) * pc);
    }
    if (money >= 0)
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

    string S;
    cin >> S;

    cin >> nb >> ns >> nc;
    for (auto i : S)
    {
        if (i == 'B')
        {
            ++b;
        }
        if (i == 'C')
        {
            ++c;
        }
        if (i == 'S')
        {
            ++s;
        }
    }
    cin >> pb >> ps >> pc;
    cin >> r;
    ll ans = 0;
    ll l = 0, h = 1e15;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}