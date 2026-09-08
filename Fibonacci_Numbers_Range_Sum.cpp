/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-07
 * Time : 20:40:55
 * Problem Name : Fibonacci_Numbers_Range_Sum
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
ll mod = 1e9 + 7;
void solve()
{
    ll n, q;
    cin >> n >> q;
    vec v(n + 1, 0);
    for (int i = 0; i < n; i++)
    {

        ll x;
        cin >> x;
    }
    v[1] = 1;
    v[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }
    vec pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // for (auto i = 1; i <= n; i++)
    //     cout << pre[i] << " ";
    // cout << endl;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << (pre[r] - pre[l - 1]) % mod << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}