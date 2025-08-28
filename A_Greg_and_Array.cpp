/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-08-2025
 * time : 10:10:59
 * Problem Name : A_Greg_and_Array
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
    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> l(m + 1), r(m + 1);
    vector<ll> d(m + 1);

    for (int i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }

    vector<ll> opCount(m + 2, 0);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        opCount[x] += 1;
        opCount[y + 1] -= 1;
    }
    for (int i = 1; i <= m; i++)
        opCount[i] += opCount[i - 1];

    vector<ll> diff(n + 3, 0);
    for (int i = 1; i <= m; i++)
    {
        ll times = opCount[i];
        if (times > 0)
        {
            diff[l[i]] += d[i] * times;
            diff[r[i] + 1] -= d[i] * times;
        }
    }

    for (int i = 1; i <= n; i++)
        diff[i] += diff[i - 1];
    for (int i = 1; i <= n; i++)
        cout << a[i] + diff[i] << " ";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // এই problem এ একটিই test case থাকে
    solve();

    return 0;
}
