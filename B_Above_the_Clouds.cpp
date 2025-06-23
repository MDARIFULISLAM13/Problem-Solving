/**
 *
 * Author : Md.Ariful Islam
 * Date : 18-06-2025
 * time : 02:17:26
 * Problem Name : B_Above_the_Clouds
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
    map<char, bool> mp;
    mp[s[0]] = 1;
    mp[s.back()] = 1;
    for (int i = 1; i < n - 1; i++)
    {
        if (mp[s[i]] == 1)
        {
            cout << "Yes\n";
            return;
        }
        mp[s[i]] = 1;
    }
    cout << "No\n";
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