/**
 *
 * Author : Md.Ariful Islam
 * Date : 13-04-2025
 * time : 21:51:02
 * Problem Name : C_Brr_Brrr_Patapim
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
    int t;
    cin >> t;
    map<int, int> mp;
    map<int, vector<int>> vc;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= t; j++)
        {
            int v;
            cin >> v;
            vc[i + j].push_back(v);
            mp[v]++;
        }
    }
    int k = 1;

    for (int i = 1; i <= t + t; i++)
    {

        if (vc[i].size() == 0)
        {
            for (int x = k; x <= t + t; x++)
            {
                if (mp[x] == 0)
                {
                    cout << x << " ";
                    mp[x] = 1;
                    k = x;
                    break;
                }
            }
        }
        else
        {
            cout << vc[i].back() << " ";
        }
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
    {
        solve();
    }

    return 0;
}