/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-10
 * Time : 07:27:51
 * Problem Name : A_Segment_Tree_for_the_Sum
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

const int N = 2e5 + 123;
ll a[N];
ll tree[4 * N];
ll cnt[N * 4];

// segment tree build

void build(int node, int st, int en)
{
    if (st == en)
    {
        tree[node] = a[st];
        cnt[node] = 1;

        return;
    }
    int mid = (st + en) / 2;
    build(node * 2, st, mid);
    build(node * 2 + 1, mid + 1, en);
    tree[node] = min(tree[node * 2 + 1], tree[node * 2]);

    cnt[node] = 0;
    if (tree[node] == tree[node * 2])
        cnt[node] += cnt[node * 2];
    if (tree[node] == tree[node * 2 + 1])
        cnt[node] += cnt[node * 2 + 1];
}

// range sum query
pair<ll, ll> query(int node, int st, int en, int l, int r)
{
    if (en < l || st > r)
        return {1e9 + 123, 0};

    if (l <= st && en <= r)
        return {tree[node], cnt[node]};

    int mid = (st + en) / 2;

    pair<ll, ll> lft = query(node * 2, st, mid, l, r);
    pair<ll, ll> rt = query(node * 2 + 1, mid + 1, en, l, r);

    if (lft.first < rt.first)
        return lft;
    else if (rt.first < lft.first)
        return rt;
    else
        return {lft.first, lft.second + rt.second};
}

// point update
void update(int node, int st, int en, int ind, ll val)
{
    if (st == en)
    {
        a[ind] = val;
        tree[node] = val;
        cnt[node] = 1;
        return;
    }
    int mid = (st + en) / 2;
    if (ind <= mid)
        update(node * 2, st, mid, ind, val);
    else
        update(node * 2 + 1, mid + 1, en, ind, val);

    tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
    cnt[node] = 0;

    if (tree[node] == tree[node * 2])
        cnt[node] += cnt[node * 2];

    if (tree[node] == tree[node * 2 + 1])
        cnt[node] += cnt[node * 2 + 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fill(a, a + N, 1e9 + 123);
    fill(tree, tree + 4 * N, 1e9 + 123);
    fill(cnt, cnt + 4 * N, 0);

    ll n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    build(1, 0, n - 1);
    while (m--)
    {
        ll x, a, b;
        cin >> x >> a >> b;
        if (x == 1)
        {
            update(1, 0, n - 1, a, b);
        }
        else
        {
            pair<ll, ll> ans = query(1, 0, n - 1, a, b - 1);
            cout << ans.first << " " << ans.second << endl;
        }
    }

    return 0;
}