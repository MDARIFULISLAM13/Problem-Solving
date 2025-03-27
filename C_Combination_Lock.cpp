/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-03-2025
 * time : 03:05:18
 * Problem Name : C_Combination_Lock
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
void arif()
{
    int n;
    cin >> n;
    if (n %2==0 )
    {
        cout << -1 << endl;
        return;
    }

    for (int i = n; i>=1; i--)
    {
        cout << i << " ";

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
        arif();
    }

    return 0;
}