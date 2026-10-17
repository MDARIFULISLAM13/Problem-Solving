/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-10-17
 * Time : 21:42:24
 * Problem Name : D_1_Come_Be_My_Friend_Don_t_Be_So_Scared_Easy_Version
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
    ll n, m;
    cin >> n >> m;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll x = (n + 1) / 2;
    cout << x << endl;
    for (int i = 1; i <= x; i++)
    {
        cout << i << " " << i + x-1<< endl;
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