/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-08
 * Time : 20:36:48
 * Problem Name : A_Monocarp_s_Contest
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
    vec v(n);
    ll cnt0 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
            ++cnt0;
    }
    if (cnt0 < 2)
    {
        cout << -1 << endl;
        return;
    }
    ll r = 2;
    if (v[0] == 0)
        --r;
    if (v[n - 1] == 0)
        --r;
    cout << r << endl;
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