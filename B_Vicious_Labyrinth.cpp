/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-03-2025
 * time : 15:54:59
 * Problem Name : B_Vicious_Labyrinth
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
    int n, k;
    cin >> n >> k;
    if (k % 2 == 0)
    {
        int ans = n - 1;
        for (int i = 1; i <= n; i++)
        {
            if (i == ans)
                cout << n << " ";
            else
                cout << ans << " ";
        }
    }
    else
    {
        int ans = n;
        for (int i = 1; i <= n; i++)
        {
            if (i == n)
                cout << n - 1 << " ";
            else
                cout << ans << " ";
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
        solve();

    return 0;
}