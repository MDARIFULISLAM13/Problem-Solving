/**
 *
 * Author : Md.Ariful Islam
 * Date : 08-06-2025
 * time : 20:37:43
 * Problem Name : A_False_Alarm
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

    vec v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool f1 = 0;
    int cnt = 0;
    for (auto i : v)
    {
        if (i == 1)
        {
            f1 = 1;
        }
        if (f1 == 1)
        {

            --x;
        }
        if (x < 0 && i==1)
        {
            cout << "NO\n";
            return;
        }
    }

    yes;
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
