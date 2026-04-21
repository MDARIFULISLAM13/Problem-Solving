/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-15
 * Time : 20:35:01
 * Problem Name : Non_Negative_Sum
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

    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll ans = 0;

    sort(v);
    rev(v);
    ll cnt = 0;
    for (auto i : v)
    {
        if (ans + i >= 0)
        {
            ++cnt;
            ans += i;
        }
        else
        {
            break;
        }
    }

    cout << cnt << endl;
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