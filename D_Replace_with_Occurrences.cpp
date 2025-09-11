/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-07
 * Time : 21:22:28
 * Problem Name : D_Replace_with_Occurrences
 *
 **/
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
#define rsort(a) sort(a.rbegin(), a.rend());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n;
    cin >> n;

    vec v;
    map<int, int> mp;
    vec vv;
    ll cnt = 0;
    vec allv;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        if (mp[x] == 0 || x == 1)
        {
            mp[x]++;
            v.push_back(x);
            cnt += x;
        }
        else
        {
            vv.push_back(x);
        }

        allv.push_back(x);
    }

    if (cnt < n)
    {
        ll rem = n - cnt;
        int m = vv.size();

        bitset<1000001> can;
        can[0] = 1;
        vector<int> parent(rem + 1, -1);

        for (int i = 0; i < m; i++)
        {
            bitset<1000001> tmp = can;
            tmp <<= vv[i];
            tmp &= ((1ULL << (rem + 1)) - 1);
            tmp ^= can;
            for (int s = tmp._Find_first(); s <= rem; s = tmp._Find_next(s))
            {
                parent[s] = i;
            }
            can |= (can << vv[i]);
        }

        if (!can[rem])
        {
            cout << -1 << endl;
            return;
        }

        vector<ll> subset;
        ll curr = rem;
        while (curr > 0)
        {
            int idx = parent[curr];
            subset.push_back(vv[idx]);
            curr -= vv[idx];
        }

        for (ll x : subset)
            v.push_back(x);

        map<int, pair<ll, ll>> mmp;

        for (auto i : v)
            mmp[i] = {mmp[i].first + i, i};

        vec vp;
        for (int i = 1; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                vp.push_back(i);
            }
        }
        reverse(vp.begin(), vp.end());

        for (auto i : allv)
        {
            ll x = mmp[i].first;
            cout << mmp[i].second << " ";
            mmp[i].first--;
            x -= 1;
            if (x % i == 0)
            {
                mmp[i].second = vp.back();
                vp.pop_back();
            }
        }
    }
    else if (cnt > n)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        for (auto i : allv)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;
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