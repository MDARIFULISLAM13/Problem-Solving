/**
 *
 * Author : Md.Ariful Islam
 * Date : 09-05-2025
 * time : 15:58:41
 * Problem Name : C_Dora_and_Search
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
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll mn = 1, mx = n;
    ll l = 1, h = n;

    while (l < h)
    {
        if (a[l] == mn || a[h] == mn)
        {
            if (a[l] == mn)
            {
                l++;
            }
            else
            {
                h--;
            }
            mn++;
        }
        else if (a[l] == mx || a[h] == mx)
        {
            if (a[l] == mx)
            {
                l++;
            }
            else
            {
                h--;
            }
            mx--;
        }
        else
        {
            break;
        }
    }
    if (l < h)
    {
        cout << l << " " << h << endl;
        return;
    }
    cout << -1 << endl;
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