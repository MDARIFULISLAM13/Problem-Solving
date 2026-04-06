/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-05
 * Time : 22:59:20
 * Problem Name : B_Alice_and_Hairdresser
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
    ll n, m, l;
    cin >> n >> m >> l;
    map<ll, ll> mp;

    map<ll, ll> mm;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > l)
        {
            mm[x]++;
            ++cnt;
        }

        mp[i + 1] = x;
    }

    //cout << mm.size() << endl;
    while (m--)
    {
        ll x;
        cin >> x;
        if (x == 0)
        {
            ll ans = mm.size();

            // cout << endl;
            // for (auto i : mp)
            //     cout << i.second << " ";

            // cout << endl;
            if (cnt == n)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }
        else
        {
            ll a, b;
            cin >> a >> b;

            if (mp[a] > l)
            {
                ll aa = mp[a];
                --mm[aa];
                if (mm[aa] == 0)
                {
                    mm.erase(aa);
                }

                aa += b;
                mp[a] = aa;
                mm[aa]++;
            }
            else
            {
                ++cnt;
                mp[a] += b;
                mm[mp[a]]++;
            }
        }
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