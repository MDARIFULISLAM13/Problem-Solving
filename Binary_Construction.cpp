/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-15
 * Time : 20:40:33
 * Problem Name : Binary_Construction
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
    ll n;
    cin >> n;
    bool ok = true;
    if (n == 2)
    {
        cout << "01" << endl;
    }
    else
    {
        cout << "0";
        for (int i = 0; i < n - 2; ++i)
        {
            cout << '1';
        }
        cout << '0';
        cout << endl;
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