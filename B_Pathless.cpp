/**
 *
 * Author : Md.Ariful Islam
 * Date : 31-07-2025
 * time : 20:49:17
 * Problem Name : B_Pathless
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
void solve()
{
    ll n, s;
    cin >> n >> s;
    vec  a(n);
    ll sum = 0;
    ll c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 0)
            c0++;
        else if (a[i] == 1)
            c1++;
        else if (a[i] == 2)
            c2++;
    }
    int diff = s - sum;

    if (!(diff < 0 || diff == 1))
    {
        cout << -1 << "\n";
        return;
    }

    for (int i = 0; i < c0; i++)
    {
        cout << 0 << ' ';
    }
    for (int i = 0; i < c2; i++)
    {
        cout << 2 << ' ';
    }
    for (int i = 0; i < c1; i++)
    {
        cout << 1 << ' ';
    }
    cout << "\n";
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