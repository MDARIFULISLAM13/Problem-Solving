/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-04
 * Time : 17:06:07
 * Problem Name : Road_Construction
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
int parent[N];
int sz[N];
int mx = 1;

ll cnt = 0;

void make(int v)
{
    parent[v] = v;
    sz[v] = 1;
}
int find(int v)
{
    if (v == parent[v])
        return v;

    return parent[v] = find(parent[v]);
}
void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        sz[a] += sz[b];
        mx = max(mx, sz[a]);
        --cnt;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    cnt = n;
    for (int i = 1; i <= n; i++)
    {
        make(i);
    }

    while (m--)
    {
        ll x, y;
        cin >> x >> y;

        Union(x, y);

               cout << cnt << " " << mx << endl;
    }

    return 0;
}