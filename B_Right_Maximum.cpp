/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-03-16
 * Time : 20:40:03
 * Problem Name : B_Right_Maximum
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
    vec vv(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
        {
            vv[i] = v[i];
        }
        else
        {
            vv[i] = max(v[i], vv[i - 1]);
        }
    }

    ll cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (vv[i] == v[i])
        {
            ++cnt;
        }
    }
    cout << cnt << endl;
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