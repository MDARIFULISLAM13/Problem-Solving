/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-07-2025
 * time : 20:35:43
 * Problem Name : A_Only_One_Digit
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

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x = 10;
        while (n > 0)
        {
            ll v = n % 10;
            x = min(v, x);
            n /= 10;
        }
        cout << x << endl;
    }

    return 0;
}