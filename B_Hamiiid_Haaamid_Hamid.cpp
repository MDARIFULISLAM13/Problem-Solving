/**
 *
 * Author : Md.Ariful Islam
 * Date : 07-08-2025
 * time : 20:39:18
 * Problem Name : B_Hamiiid_Haaamid_Hamid
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

void solve()
{

    ll n, x;
    cin >> n >> x;
    string s;
    cin >> s;

    bool lf = true;

    if (x == 1 || x == n)
    {
        cout << 1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '#')
        {
            lf = false;
            break;
        }
    }
    if (lf == true)
    {
        cout << 1 << endl;
        return;
    }

    ll c = x;
    for (int i = x - 2; i >= 0; i--)
    {

        if (s[i] == '#')
        {
            break;
        }
        --c;
    }
    ll ans1 = c;

    c = x;

    for (int i = x; i <= n; i++)
    {

        if (s[i] == '#')
        {
            break;
        }
        ++c;
    }

    ll ans3 = min(x, ((n + 1) - x));

    ll ans2 = ((n + 1) - c);

    ll ans = max(ans1, ans2);
    ans = min(ans, ans3);
    cout << ans << endl;
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