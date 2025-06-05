/**
 *
 * Author : Md.Ariful Islam
 * Date : 04-06-2025
 * time : 17:22:30
 * Problem Name : D_Almost_Arithmetic_Progression
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
    vec a(t);
    for (int i = 0; i < t; i++)
        cin >> a[i];

    if (t <= 2)
    {
        cout << 0 << endl;
        return 0;
    }

    int x = abs(a[0] - a[1]);
    int y = abs(a[1] - a[2]);
    

    for (int i = 1; i < t; i++)
    {
        v.push_back(abs(a[i] - a[i - 1]));
    }

    return 0;
}