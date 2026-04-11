/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-12
 * Time : 03:28:12
 * Problem Name : E_Enemy_is_weak
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

const int N = 2e6 + 123;
ll a[N];
ll tree[4 * N];

// segment tree build

// void build(int node, int st, int en)
// {
//     if (st == en)
//     {
//         tree[node] = a[st];
//         return;
//     }
//     int mid = (st + en) / 2;
//     build(node * 2, st, mid);
//     build(node * 2 + 1, mid + 1, en);
//     tree[node] = min(tree[node * 2 + 1], tree[node * 2]);
// }

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
void update(int node, int st, int en, int ind)
{
    if (st == en)
    {

        tree[node] += 1;
        return;
    }
    int mid = (st + en) / 2;
    if (ind <= mid)
        update(node * 2, st, mid, ind);
    else
        update(node * 2 + 1, mid + 1, en, ind);

    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vec v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vec temp = v;
    sort(temp);
    for (int i = 0; i < n; i++)
    {
        a[i] = lower_bound(temp.begin(), temp.end(), v[i]) - temp.begin() + 1;
    }

    vec l(n), r(n);

    mem(tree, 0);

    for (int i = 0; i < n; i++)
    {
        ll x = a[i];

        l[i] = query(1, 1, n, x + 1, n);
        update(1, 1, n, x);
    }
    mem(tree, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        ll x = a[i];

        r[i] = query(1, 1, n, 1, x - 1);
        update(1, 1, n, x);
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += l[i] * r[i];
    }

    cout << ans << "\n";

    return 0;
}