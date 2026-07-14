/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-06-29
 * Time : 21:24:49
 * Problem Name : A_Another_Puzzle_from_Papyrus
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
    ll n, c;
    cin >> n >> c;
    vec v(n), vv(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        cin >> vv[i];

    ll cst = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < vv[i])
        {
            cst = 1e18;
            break;
            ;
        }
        cst += abs(v[i] - vv[i]);
    }

    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    ll cst2 = c;
    for (int i = 0; i < n; i++)
    {
        ll x = vv[i];

        if (mp[x] > 0)
        {
            mp[x]--;
        }
        else
        {
            for (int j = x; j <= 101; j++)
            {
                if (mp[j] > 0)
                {
                    mp[j]--;
                    cst2 += abs(j - x);
                    break;
                }
                if(j==101){
                    cout << -1 << endl;
                    return;
                }
            }
        }
    }

    cout << min(cst, cst2) << endl;
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