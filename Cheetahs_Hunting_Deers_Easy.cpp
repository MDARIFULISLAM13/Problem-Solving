/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-10-28
 * Time : 18:12:25
 * Problem Name : Cheetahs_Hunting_Deers_Easy
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
    ll n, m;
    cin >> n >> m;
    vec v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vec vv(m);
    for (int i = 0; i < m; i++)
        cin >> vv[i];

    sort(v);
    sort(vv);
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > vv[cnt])
        {
            ++cnt;
        }
        else
        {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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