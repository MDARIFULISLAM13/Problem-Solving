/**
 *
 * Author : Md.Ariful Islam
 * Date : 09-05-2025
 * time : 16:34:51
 * Problem Name : A_Kirill_And_The_Game
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll l, r, x, y, k;
    cin >> l >> r >> x >> y >> k;

    for (int i = x; i <= y; i++)
    {
        ll p = i * k;
        if (p >= l && p <= r)
        {
            yes;
            return 0;
        }
        if (p > r)
        {
            break;
            
        }
    }
    no;

    return 0;
}