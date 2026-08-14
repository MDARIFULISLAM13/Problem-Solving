/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-07-14
 * Time : 21:29:14
 * Problem Name : D_Yaroslav_and_Productivity
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
    ll m;
    cin >> m;

    ll arr[n + 1];
    vec pp(n + 1), ng(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            pp[i] = pp[i - 1] + arr[i];
            ng[i] = ng[i - 1];
        }
        else
        {
            ng[i] = ng[i - 1] + abs(0 - arr[i]);
            pp[i] = pp[i - 1];
        }
    }

    vec v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    sort(v);
    ll lst = v.back();
    ll cnt = 0;
    while (!v.empty())
    {
        ll a = v.back();
        v.pop_back();
        ll b = 0;
        if (!v.empty())
        {
            b = v.back();
        }

        ll aa = pp[a] - pp[b];
        ll bb = ng[a] - ng[b];

        cnt += (max(aa, bb) - min(aa, bb));
        // cout << a << " " << b << " " << aa << " " << bb << endl;
        ;
    }

    for (int i = lst+1; i <= n; i++)
    {
        cnt += arr[i];
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