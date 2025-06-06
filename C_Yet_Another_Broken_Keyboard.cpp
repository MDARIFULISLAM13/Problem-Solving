/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-06-2025
 * time : 11:07:39
 * Problem Name : C_Yet_Another_Broken_Keyboard
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y;
    cin >> x >> y;
    string s;
    cin >> s;
    map<char, bool> mp;
    for (int i = 0; i < y; i++)
    {

        char c;
        cin >> c;
        mp[c] = 1;
    }
    ll ans = 0;

    ll cnt = 0;
    for (auto i : s)
    {
        if (mp[i] == 1)
        {
            ++cnt;
        }
        else
        {
            ans += ((cnt * (cnt + 1)) / 2);
            cnt = 0;
        }
    }
    ans += ((cnt * (cnt + 1)) / 2);
    cout << ans;

    return 0;
}