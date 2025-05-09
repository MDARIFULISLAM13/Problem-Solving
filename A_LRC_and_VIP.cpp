/**
 *
 * Author : Md.Ariful Islam
 * Date : 05-05-2025
 * time : 20:48:45
 * Problem Name : A_LRC_and_VIP
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
    vec a(n);
    vec v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v[i] = a[i];
    }
    sort(a.begin(), a.end());
    if (a[0] == a.back())
    {
        no;
        return;
    }
    yes;
    for (int i : v)
    {
        if (i == a.back())
        {
            cout << 2 << " ";
        }
        else
        {
            cout << 1 << " ";
        }
    }
    cout << endl;
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