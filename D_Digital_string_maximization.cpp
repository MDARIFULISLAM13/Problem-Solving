/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-07-2025
 * time : 05:56:21
 * Problem Name : D_Digital_string_maximization
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

    while (1)
    {
        bool f = 0;
        for (int i = 1; i < s.size(); i++)
        {
            char n = s[i];
            --n;
            if (n > s[i - 1])
            {
                swap(s[i - 1], s[i]);
                s[i - 1] = n;
                f = 1;
            }
        }
        if (f == 0)
        {
            break;
        }
    }

    cout << s<<endl;
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