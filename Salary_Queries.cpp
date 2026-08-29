/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-10
 * Time : 05:00:00
 * Topic : Segment Tree (Point Update + Range Sum Query)
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
#define srt(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

const int N = 2e6 + 123;
ll a[N];
ll tree[4 * N];

// segment tree build

void build(int node, int st, int en)
{
    if (st == en)
    {
        tree[node] = a[st];
        return;
    }
    int mid = (st + en) / 2;
    build(node * 2, st, mid);
    build(node * 2 + 1, mid + 1, en);
    tree[node] = tree[node * 2 + 1] + tree[node * 2];
}

// range sum query
ll query(int node, int st, int en, int l, int r)
{
    if (en < l || st > r)
        return 0;

    if (l <= st && en <= r)
        return tree[node];

    int mid = (st + en) / 2;
    ll lft = query(node * 2, st, mid, l, r);
    ll rt = query(node * 2 + 1, mid + 1, en, l, r);
    return lft + rt;
}

// point update
void update(int node, int st, int en, int ind, ll val)
{
    if (st == en)
    {
        a[ind] = val;
        tree[node] = val;
        return;
    }
    int mid = (st + en) / 2;
    if (ind <= mid)
        update(node * 2, st, mid, ind, val);
    else
        update(node * 2 + 1, mid + 1, en, ind, val);

    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

void solve()
{

    ll n, q;
    cin >> n >> q;
    vec v(n + 1);
    vec vv;
    map<ll, ll> cnt;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        vv.push_back(v[i]);
        cnt[v[i]]++;
    }
    vector<pair<char, pair<ll, ll>>> qq;
    for (int i = 0; i < q; i++)
    {
        char c;
        ll x, y;
        cin >> c >> x >> y;
        qq.push_back({c, {x, y}});
        if (c == '!')
        {
            vv.push_back(y);
        }
    }
    sort(vv.begin(), vv.end());
    vv.erase(unique(vv.begin(), vv.end()), vv.end());
    ll sz = vv.size();

    for (int i = 0; i < vv.size(); i++)
    {
        a[i] = cnt[vv[i]];
    }
    build(1, 0, sz - 1);

    for (int i = 0; i < q; i++)
    {
        auto yy = qq[i];
        char c = yy.first;
        ll x = yy.second.first;
        ll y = yy.second.second;
        if (c == '!')
        {
            ll ux = v[x];
            v[x] = y;

            auto it = lower_bound(vv.begin(), vv.end(), ux);
            int iux = it - vv.begin();
            it = lower_bound(vv.begin(), vv.end(), y);
            int iy = it - vv.begin();
            
            update(1, 0, sz - 1, iux, a[iux] - 1);
            update(1, 0, sz - 1, iy, a[iy] + 1);
            
            
        }
        else
        {

            int idx = lower_bound(vv.begin(), vv.end(), x) - vv.begin();
            auto it = upper_bound(vv.begin(), vv.end(), y);

            int idy;

            if (it == vv.begin())
                idy = -1;
            else
            {
                --it;
                idy = it - vv.begin();
            }

            if (idy == -1 || idx >= vv.size())
            {
                cout << 0 << endl;
            }
            else
            {
                cout << query(1, 0, sz - 1, idx, idy) << endl;
            }
        }
    }
}

int main()
{

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}