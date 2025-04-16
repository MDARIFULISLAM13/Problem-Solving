/**
 *
 * Author : Md.Ariful Islam
 * Date : 30-03-2025
 * time : 21:43:03
 * Problem Name : A_Kamilka_and_the_Sheep
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
    vec a(n);
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << a.back() - a[0] << endl;
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