/**
 *
 * Author : Md.Ariful Islam
 * Problem : Max Size (Segment Tree)
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl "\n"
const int N = 2e5 + 5;

ll cnt[4 * N]; // কতটা element
ll sum[4 * N]; // total sum

// 🔧 update: value add করা
void update(int node, int st, int en, int pos)
{
    if (st == en)
    {
        cnt[node] += 1;
        sum[node] += st; // value = st
        return;
    }
    int mid = (st + en) / 2;
    if (pos <= mid)
        update(node * 2, st, mid, pos);
    else
        update(node * 2 + 1, mid + 1, en, pos);

    cnt[node] = cnt[node * 2] + cnt[node * 2 + 1];
    sum[node] = sum[node * 2] + sum[node * 2 + 1];
}

// 🔥 main query: max কতটা element নিতে পারি
ll query(int node, int st, int en, ll Y)
{
    if (Y <= 0 || cnt[node] == 0)
        return 0;

    // পুরো segment নেওয়া যায়
    if (sum[node] <= Y)
        return cnt[node];

    if (st == en)
    {
        // leaf
        return min(cnt[node], Y / st);
    }

    int mid = (st + en) / 2;

    if (sum[node * 2] <= Y)
    {
        // left পুরো নিবো
        ll left_take = cnt[node * 2];
        ll rem = Y - sum[node * 2];
        ll right_take = query(node * 2 + 1, mid + 1, en, rem);
        return left_take + right_take;
    }
    else
    {
        // left পুরো নিতে পারি না
        return query(node * 2, st, mid, Y);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    // queries store করবো (offline)
    vector<vector<pair<ll, int>>> queries(n + 1);

    for (int i = 0; i < q; i++)
    {
        ll x, y;
        cin >> x >> y;
        queries[x].push_back({y, i});
    }

    vector<ll> ans(q);

    // 🔥 build prefix
    for (int i = 1; i <= n; i++)
    {
        update(1, 1, n, a[i]);

        // এই prefix এর সব query process
        for (auto [Y, idx] : queries[i])
        {
            ans[idx] = query(1, 1, n, Y);
        }
    }

    for (int i = 0; i < q; i++)
        cout << ans[i] << endl;

    return 0;
}