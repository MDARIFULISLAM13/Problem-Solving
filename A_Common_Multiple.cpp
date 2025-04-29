/**
 *
 * Author : Md.Ariful Islam
 * Date : 21-04-2025
 * time : 20:38:31
 * Problem Name : A_Common_Multiple
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
    int n;
    cin >> n;
    int ans = 0;
    map<int, bool> mp;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        if (mp[v] == 0)
        {
            ++ans;
            mp[v] = 1;
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
        solve();

    return 0;
}