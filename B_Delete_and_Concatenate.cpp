/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-07-16
 * Time : 21:00:09
 * Problem Name : B_Delete_and_Concatenate
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
    ll n, k;
    cin >> n >> k;
    vec v, vv;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (a >= k)
        {
            v.push_back(a);
        }
        else
        {
            vv.push_back(a);
        }
    }

    sort(vv);
    rev(vv);
    ll ans = 0;

    for (auto i : v)
    {
        ll a = i;
        a -= k;
        ans += a;
        if (!vv.empty())
            vv.pop_back();
    }
 //   cout << ans << endl;

    for (auto i = 0; i < vv.size(); i++)
    {

        ans += vv[i];
        ans -= k;

        
        if (!vv.empty())
            vv.pop_back();
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