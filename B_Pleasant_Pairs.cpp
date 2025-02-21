/**
 *
 * Author : Md.Ariful Islam
 * Date : 22-02-2025
 * time : 05:28:28
 * Problem Name : B_Pleasant_Pairs
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
    vec a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {

        int z = i + i - 1;
        if (a[i] > z)
            continue;
        int x = (z % a[i] + 1);
        int y = i - x;
        while (y >= 1)
        {
            if (y + i == a[i] * a[y])
                ++cnt;
            y -= a[i];
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