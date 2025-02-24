/**
 *
 * Author : Md.Ariful Islam
 * Date : 23-02-2025
 * time : 06:25:59
 * Problem Name : A_Odd_Selection
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
    int n, x;
    cin >> n >> x;
    int odd = 0, even = 0;
    for (int i = 1; i <= n; i++)
    {
        ll v;
        cin >> v;
        if (v & 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    if (odd == 0)
    {
        cout << "No\n";
        return;
    }

    --odd;
    x--;
    while (x >= 2 && odd >= 2)
    {
        odd -= 2;
        x -= 2;
    }
    while (x >= 1 && even >= 1)
    {
        even--;
        x--;
    }
    if (x == 0)
    {
        cout << "Yes\n";
        return;
    }
    cout << "No\n";
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