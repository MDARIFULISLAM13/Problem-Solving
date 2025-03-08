/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-03-2025
 * time : 15:46:16
 * Problem Name : A_Points_on_Line
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

ll count(ll n)
{
    if (n < 3)
        return 0;
    return (n - 1) * (n - 2) / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, d;
    cin >> n >> d;
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int l = i, h = n;
        ll ind = i;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (a[mid] - a[i] > d)
            {
                h = mid - 1;
            }
            else
            {
                ind = mid;
                l = mid + 1;
            }
        }
        cnt += count(ind + 1 - i);
    }
    cout << cnt << endl;

    return 0;
}
