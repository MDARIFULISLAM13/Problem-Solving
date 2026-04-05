/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-05
 * Time : 19:51:06
 * Problem Name : D_Roads_not_only_in_Berland
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
bool ok = false;
void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a == b)
        ok = true;
    if (a != b)
    {
        if (sz[a] < sz[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        sz[a] += sz[b];
    }
}

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        make(i);

    vector<pair<int, int>> v;
    ll m = n;
    while (m--)
    {
        ll x, y;
        cin >> x >> y;
        Union(x, y);
        if (ok)
        {
            v.push_back({x, y});
            ok = false;
        }
    }

    vec r;
    for (int i = 1; i <= n; i++)
    {
        if (find(i) == i)
        {
            r.push_back(i);
        }
    }
    cout << v.size() - 1 << endl;

    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i].first << " " << v[i].second << " " << r[i] << " " << r[i + 1] << endl;
    }

    return 0;
}