/**
 *
 * Author : Md.Ariful Islam
 * Date : 27-05-2025
 * time : 21:07:32
 * Problem Name : A_Square_Year
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

    for (int i = 0; i <= 101; i++)
    {
        for (int j = 0; j <= 101; j++)
        {
            if (pow((i + j), 2) == n)
            {
                cout << i << " "<< j << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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