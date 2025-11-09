/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-10
 * Time : 04:14:47
 * Problem Name : D_Three_Activities
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
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n;
    cin >> n;

    vector<pair<ll, ll>> a;
    vector<pair<ll, ll>> b;
    vector<pair<ll, ll>> c;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        a.push_back({x, i});
    }
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        b.push_back({x, i});
    }
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        c.push_back({x, i});
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());

    
    vector<pair<ll, ll>> ta(a.begin(), a.begin() + 3);
    vector<pair<ll, ll>> tb(b.begin(), b.begin() + 3);
    vector<pair<ll, ll>> tc(c.begin(), c.begin() + 3);

    ll best = 0;
    for (auto &pa : ta)
    {
        for (auto &pb : tb)
        {
            for (auto &pc : tc)
            {
                if (pa.second != pb.second && pa.second != pc.second && pb.second != pc.second)
                {
                    ll sum = pa.first + pb.first + pc.first;
                    if (sum > best)
                        best = sum;
                }
            }
        }
    }
    cout << best << endl;
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