/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-15
 * Time : 21:17:13
 * Problem Name : A_Composite_Permutation
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
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
    if (n < 4)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << 4 << " ";
        }
        else if (i == 4)
        {
            cout << 1 << " ";
        }
        else
        {
            cout << i << " ";
        }
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
        solve();

    return 0;
}