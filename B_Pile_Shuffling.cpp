/**
 *
 * Author : Md.Ariful Islam
 * Date : 19-07-2025
 * time : 22:56:10
 * Problem Name : B_Pile_Shuffling
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
        int n;
        cin >> n;

        ll ans = 0;
        while (n--)
        {
            ll a, b, c, d;
            cin >> a >> b >> c >> d;
            if (b > d)
            {
                ans += (a + (b - d));
            }

            else if (a > c)
            {
                ans += a - c ;
            }
          
        }
        cout << ans << endl;
    }

    return 0;
}