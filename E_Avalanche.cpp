/**
 *
- Author : Md.Ariful Islam
- Date : 2026-11-20
- Time : 21:25:52
- Problem Name : E_Avalanche
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
    vec v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] %= 2;
    }

    vec df(n, 0);
    ll u = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        u ^= df[i];
        v[i] ^= u;

        if (v[i] == 1 && k > 0 && i > 0)
        {
            u ^= 1;
            ll l = max(0ll, i - k);
            if (l - 1 >= 0)
            {
                df[l - 1] ^= 1;
            }
        }
    }

    ll cnt = 0;
    for (auto i : v)
    {
        cnt += i;
    }
    cnt %= 2;
    if (cnt == 1)
    {
        cout << "Alice\n";
    }
    else
    {
        cout << "Bob\n";
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
        solve();

    return 0;
}