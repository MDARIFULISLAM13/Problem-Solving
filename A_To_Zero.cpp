/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-03-2025
 * time : 20:38:01
 * Problem Name : A_To_Zero
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
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    if (n % 2 != 0)
    {
        ans = 1;
        n -= k;
    }
    if (n > 0)
    {
        --k;
        ans += (n / k);
        if (n % k != 0)
        {
            ++ans;
        }
    }

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
    {
        solve();
    }

    return 0;
}