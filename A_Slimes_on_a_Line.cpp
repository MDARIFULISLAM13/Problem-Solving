/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-23
 * Time : 20:37:23
 * Problem Name : A_Slimes_on_a_Line
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

    ll n;
    cin >> n;
    vec v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v);

    ll ans = 1e7;

    for (int i = v[0]; i <= v[n - 1]; i++)
    {
        ll ans1 = 0;
        ll x = i;

        for (int j = 0; j < n; j++)
        {
            ans1 = max(ans1, abs(v[j] - x));

        }

        ans = min(ans, ans1);
    }
    cout << ans << endl;
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