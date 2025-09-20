#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
    vec v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    unordered_map<ll, ll> mp;
    for (ll x : v)
        mp[x]++;

    vector<pair<ll, ll>> frq;
    frq.reserve(mp.size());
    for (auto &p : mp)
        frq.push_back({p.second, p.first});

    sort(frq.rbegin(), frq.rend());

    ll cnt1 = 0, cnt2 = 0;
    bool cn = true;
    int i = 0;
    while (i < (int)frq.size())
    {
        ll cf = frq[i].first;
        ll ttf = 0;
        int j = i;
        while (j < (int)frq.size() && frq[j].first == cf)
        {
            ttf += frq[j].second;
            j++;
        }
        if (cn)
        {
            cnt1 += ((ttf + 1) / 2) * cf;
            cnt2 += (ttf / 2) * cf;
        }
        else
        {
            cnt2 += ((ttf + 1) / 2) * cf;
            cnt1 += (ttf / 2) * cf;
        }
        if (ttf % 2 != 0)
            cn = !cn;
        i = j;
    }

    cout << cnt1 << " " << cnt2 << endl;
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
