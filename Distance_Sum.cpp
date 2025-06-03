/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-06-2025
 * time : 18:47:27
 * Problem Name : Distance_Sum
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

    int n, k;
    cin >> n >> k;
    ll sum = k;
    for (int i = k + 1; i <= (k + (n / 2)); i++)
    {
        sum += i;
    }

    for (int i = k - (n / 2); i < k; i++)
    {
        sum += i;
    }
    cout << sum << endl;

    return 0;
}