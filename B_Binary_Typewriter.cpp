/**
 *
 * Author : Md.Ariful Islam
 * Date : 21-04-2025
 * time : 20:45:37
 * Problem Name : B_Binary_Typewriter
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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    ll cg = 0;

    char pre = '0';
    for (int i = 0; i < n; i++)
    {
        if (s[i] != pre)
        {
            ans += 2;
            pre = s[i];
            cg++;
        }
        else
        {

            ans += 1;
        }
    }
    if (cg >= 2)
    {
        --ans;
    }
    if (cg >= 3)
    {
        --ans;
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
