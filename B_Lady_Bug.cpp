/**
 *
 * Author : Md.Ariful Islam
 * Date : 30-03-2025
 * time : 22:23:15
 * Problem Name : B_Lady_Bug
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
    string s, ss;
    cin >> s >> ss;
    int e1 = 0, o1 = 0;
    int e0 = 0, o0 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (i % 2 == 0)
            {

                e1++;
            }
            else
            {
                o1++;
            }
        }

        if (ss[i] == '0')
        {
            if (i % 2 == 0)
            {
                e0++;
            }
            else
            {
                o0++;
            }
        }
    }
 
    if (e1 > o0 || o1 > e0)
    {

        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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