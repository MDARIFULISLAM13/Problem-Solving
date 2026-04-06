/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-05
 * Time : 23:33:40
 * Problem Name : C_News_Distribution
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

const int N = 5e5 + 123;
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
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        make(i);

    while (m--)
    {
        ll x;
        cin >> x;
        vec v;
        for (int i = 0; i < x; i++)
        {
            ll y;
            cin >> y;
            v.push_back(y);
        }
        if (v.size() > 1)
        {
            for (int i = 1; i < x; i++)
            {
                Union(v[i], v[i - 1]);
            }
        }
    }

    for (int i = 1; i <= n;i++){
        cout << sz[find(i)] << " ";
    }
        return 0;
}