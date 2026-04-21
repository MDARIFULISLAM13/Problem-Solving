/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-12
 * Time : 04:20:09
 * Problem Name : Alternating_Sum
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        x = abs(x);
        a[i] = x;

       
    }
    build(1, 0, n - 1);
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        --a, --b;

        

        cout << query(1, 0, n - 1, a, b - 1) << endl;
    }

    return 0;
}