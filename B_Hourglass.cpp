/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-01-20
 * Time : 21:21:44
 * Problem Name : B_Hourglass
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
    ll n, k, m;
    cin >> n >> k >> m;
    m = m % k;
    if (m >= n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << k - m << endl;
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