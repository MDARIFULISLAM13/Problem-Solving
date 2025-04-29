/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-04-2025
 * time : 17:01:16
 * Problem Name : A_Vadim_s_Collection
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
    int a[10] = {0};
    for (auto i : s)
    {
        int x = i - '0';
        a[x]++;
    }
    vec ans;

    bool f = 0;

    while (1)
    {
        bool ok = 0;
        if (f == 0)
        {
            f = 1;
            for (int i = 9; i >= 1; i--)
            {
                if (a[i] > 0)
                {
                    a[i]--;
                    ans.push_back(i);
                    ok = 1;
                }
            }
        }
        else
        {
            f = 0;
            for (int i = 1; i <= 9; i++)
            {
                if (a[i] > 0)
                {
                    a[i]--;
                    ans.push_back(i);
                    ok = 1;
                }
            }
        }
        if (ok == 0)
        {
            break;
        }
    }
    for (auto i : ans)
    {
        cout << i;
    }
    for (int i = 1; i <= a[0]; i++)
    {
        cout << 0;
    }
    cout << endl;
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