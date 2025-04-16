/**
 *
 * Author : Md.Ariful Islam
 * Date : 13-04-2025
 * time : 22:10:27
 * Problem Name : D_Tung_Tung_Sahur
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
    string s, ss;
    cin >> s >> ss;
    int i = 0, j = 0;
    while (i < s.size() && j < ss.size())
    {
        char a = s[i];
        int cnt = 0, cntj = 0;

        while (i < s.size() && s[i] == a)
        {
            i++;
            cnt++;
        }
        while (j < ss.size() && ss[j] == a)
        {
            j++;
            cntj++;
        }

        if (cntj < cnt || cntj > cnt * 2)
        {
            no return;
        }
    }

    if (i == s.size() && j == ss.size())
        yes else no
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