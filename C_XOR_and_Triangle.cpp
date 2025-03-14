/**
 *
 * Author : Md.Ariful Islam
 * Date : 13-03-2025
 * time : 23:08:43
 * Problem Name : C_XOR_and_Triangle
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
bool two(int n)
{
    return (n > 0) && ((n & (n - 1)) == 0);
}
void solve()
{

    int n;
    cin >> n;
    if (two(n) == true || two(n + 1) == true)
    {
        cout << -1 << endl;
        return;
    }

    int x = log2(n);
    int m = (1LL << x) - 1;
    cout << m << endl;
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
