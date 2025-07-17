/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-07-2025
 * time : 15:27:03
 * Problem Name : C_Penchick_and_BBQ_Buns
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
    ll n;
    cin >> n;
    if (n < 27 && n % 2 != 0)
    {
        cout << -1<< endl;
        return;
    }
    if (n % 2 == 0)
    {
        int i = 1;
        for (int j = 1; j <= n; j += 2)
        {
            cout << i << " " << i << " ";
            ++i;
        }
        cout << endl;
        return;
    }

    cout << 1 << " ";
    int c = 2;
    for (int i = 2; i < 10; i += 2)
    {
        cout << c << " " << c << " ";
        ++c;
    }
    cout << 1 << " ";
    for (int i = 11; i < 23; i += 2)
    {
        cout << c << " " << c << " ";
        ++c;
    }
    cout << 13 << " " << 12 << " " << 12 << " " << 1 << " " << 13 << " ";
    c = 30;
    for (int i = 28; i <= n; i+=2)
    {
        cout << c << " " << c << " ";
        ++c;
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