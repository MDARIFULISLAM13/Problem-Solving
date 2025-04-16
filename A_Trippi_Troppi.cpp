/**
 *
 * Author : Md.Ariful Islam
 * Date : 13-04-2025
 * time : 21:35:42
 * Problem Name : A_Trippi_Troppi
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
        string a, b, c;
        cin >> a >> b >> c;
        cout << (char)tolower(a[0]) << (char)tolower(b[0]) << (char)tolower(c[0]) << endl;
    }

    return 0;
}