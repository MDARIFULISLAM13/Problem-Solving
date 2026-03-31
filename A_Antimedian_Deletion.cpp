/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-03-28
 * Time : 20:47:42
 * Problem Name : A_Antimedian_Deletion
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
    vec v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (n < 3)
    {
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << n-1 << " ";
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