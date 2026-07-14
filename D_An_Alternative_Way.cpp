/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-06-30
 * Time : 21:21:32
 * Problem Name : D_An_Alternative_Way
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
    vec v(n), vv(n);

    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> vv[i];
    }
    for (int i = 0; i < n; i++)
    {
        cnt += (vv[i] - v[i]);

        if (cnt < 0)
        {
            no return;
        }

       // cout << cnt << endl;
    }
    yes
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