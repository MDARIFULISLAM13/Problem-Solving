/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-01-26
 * Time : 20:09:02
 * Problem Name : C_Replace_and_Sum
 *
 **/
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
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n, q;
    cin >> n >> q;
    vec a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = n - 1; i >= 0; i--)
    {
        a[i] = max(a[i], b[i]);
        if (i != (n - 1))
        {
            a[i] = max(a[i], a[i + 1]);
        }
    }

    vec ans(n + 1);

    for (int i = 1; i <= n; i++)
    {
        ans[i] = ans[i - 1] + a[i - 1];
    }

    // for(auto i : ans)
    //     cout << i << " ";
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << ans[r] - ans[l - 1] <<" ";
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
        solve();

    return 0;
}