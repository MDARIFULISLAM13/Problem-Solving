/**
 *
 * Author : Md.Ariful Islam
 * Date : 09-05-2025
 * time : 16:41:09
 * Problem Name : B_Wrath
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define mem(dp, i) memset(dp, i, sizeof(dp));

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    long long a[n + 1];
    bool b[n + 1] = {0};
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll cnt = 1;
    ll mxm = n;

    for (long long i = n; i >= 1; i--)
    {
        if (mxm > i)
        {
            ++cnt;
        }
        ll x = 0;
        x = a[i];
        ll y = i;
        y -= x;
        if (mxm > y)
        {
            mxm = y;
        }

    }
    cout << cnt;

    return 0;
}