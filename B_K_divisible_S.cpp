/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-14
 * Time : 13:42:56
 * Problem Name : B_K_divisible_S
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (k <= n)
    {
        if (n % k == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
        return;
    }
    ll ans = k / n;
    if (k % n != 0)
    {
        ++ans;
    }
    cout<<ans<<endl;
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