/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-04-2025
 * time : 00:07:16
 * Problem Name : D_Corrupted_Array
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
    int n;
    cin >> n;
    vec a(n + 2);
    ll sum = 0;

    for (int i = 0; i < n + 2; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());

    sum -= a[n];
    sum -= a[n + 1];
    if (sum == a[n] || sum == a[n + 1])
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }

    sum += a[n];
    ll x = sum - a[n + 1];
    bool ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            a[i] = -9;
            ok = 1;
            break;
        }
    }

    if (ok == 0)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i <= n; i++)
    {
        if (a[i] >= 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }

    return 0;
}
