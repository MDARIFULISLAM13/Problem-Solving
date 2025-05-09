/**
 *
 * Author : Md.Ariful Islam
 * Date : 05-05-2025
 * time : 20:55:58
 * Problem Name : B_Apples_in_Boxes
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
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    vec a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    bool ok = 0;
    if (a[a.size() - 2] == a.back())
    {
        ok = 1;
    }

    if (abs(a.back() - a[0]) > k + 1 || (abs(a.back() - a[0]) > k && ok==1))
    {
        cout << "Jerry\n";
        return;
    }
    if (sum & 1)
    {
        cout << "Tom\n";
    }
    else
    {
        cout << "Jerry\n";
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
    {
        solve();
    }

    return 0;
}
