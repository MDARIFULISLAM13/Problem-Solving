/**
 *
 * Author : Md.Ariful Islam
 * Date : 08-04-2025
 * time : 20:51:50
 * Problem Name : B_Expensive_Number
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
    string s;
    cin >> s;
    ll cnt = 0;
    bool f = false;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] != '0' && f == false)
        {
            f = true;
        }
        else if (f == false)
        {
            ++cnt;
        }
        else if (s[i] != '0')
        {
            ++cnt;
        }
    }
    cout << cnt << endl;
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