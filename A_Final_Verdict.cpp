/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-03-2025
 * time : 15:34:17
 * Problem Name : A_Final_Verdict
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
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        du v;
        cin >> v;
        sum += v;
    }
    sum /= n;
    if (sum == x)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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