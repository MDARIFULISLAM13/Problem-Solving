/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-04-2025
 * time : 01:32:05
 * Problem Name : C_Wrong_Addition
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
    string a, s;
    cin >> a >> s;
    string ans = "";
    while (s.size() != 0)
    {
        int x = s.back() - '0';

        int y = 0;
        if (a.size() != 0)
        {
            y = a.back() - '0';
            a.pop_back();
        }
        s.pop_back();
        if (s.size() == 0 && y > x)
        {
            cout << -1 << endl;
            return;
        }
        if (y > x)
        {
            int m = s.back() - '0';
            m = m * 10;
            x += m;
            s.pop_back();
        }
        if (x - y > 9 || y>x)
        {

            cout << -1 << endl;
            return;
        }
        int dif = x - y;
        ans.push_back('0' + dif);
    }
    if (a.size() != 0)
    {
        cout << -1 << endl;
        return;
    }
    while (ans.back() == '0')
    {
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
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