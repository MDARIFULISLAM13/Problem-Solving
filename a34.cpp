/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-04
 * Time : 19:41:34
 * Problem Name : a34
 *
 **/
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
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    for (int i = 0;i < 100;i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        else
        {
            cout << "aaa";
        }
        if (2 == 4) { cout << "A"; }
        if (3 == 4) { cout << "AA"; }
        if (4 == 3) {
            cout << "A"; int y = 2;
        }

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