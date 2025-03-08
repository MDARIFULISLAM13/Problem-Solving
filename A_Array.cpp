/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-03-2025
 * time : 02:16:32
 * Problem Name : A_Array
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
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << 1 << " " << a[0] << endl;
    a[0] = INT_MIN;
    --t;

    sort(a.rbegin(), a.rend());
    if (a[0] > 0)
    {
        cout << 1 << " " << a[0] << endl;
        a[0] = INT_MIN;
        --t;
    }
    else
    {
        cout << 2 << " " << a[1] << " " << a[2] << endl;
        a[01] = INT_MIN;
        a[2] = INT_MIN;
        t -= 2;
    }
    cout << t << " ";
    for (auto i : a)
    {
        if (i != INT_MIN)
        {
            cout << i << " ";
        }
    }

    return 0;
}