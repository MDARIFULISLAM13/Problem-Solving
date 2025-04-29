/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-04-2025
 * time : 20:37:31
 * Problem Name : A_Dr_TC
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
    string s;
    cin >> s;
    ll c = 0;
    for (auto i : s)
    {

        if (i == '1')
        {

            ++c;
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans += (c - 1);
        }
        else{
            ans += (c + 1);
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