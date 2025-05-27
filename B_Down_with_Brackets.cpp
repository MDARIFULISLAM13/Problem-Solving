/**
 *
 * Author : Md.Ariful Islam
 * Date : 25-05-2025
 * time : 19:08:41
 * Problem Name : B_Down_with_Brackets
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
    int cnt1 = 0, cnt2 = 0;
    for (auto i : s)
    {
        if (i == '(')
            ++cnt1;
        if (i == ')')
            ++cnt2;

        if (cnt1 == cnt2 && cnt1 + cnt2 != s.size())
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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