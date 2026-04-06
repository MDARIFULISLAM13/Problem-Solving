/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-06
 * Time : 06:52:49
 * Problem Name : B_Mr_Kitayuta_s_Colorful_Graph
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

const int N = 101;
int parent[N][N];
int sz[N][N];

void make(int v, int c)
{
    parent[c][v] = v;
    sz[c][v] = 1;
}
int find(int v, int c)
{
    if (v == parent[c][v])
        return v;

    return parent[c][v] = find(parent[c][v], c);
}
void Union(int a, int b, int c)
{
    a = find(a, c);
    b = find(b, c);
    if (a != b)
    {
        if (sz[c][a] < sz[c][b])
        {
            swap(a, b);
        }
        parent[c][b] = a;
        sz[c][a] += sz[c][b];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            make(j, i);
        }
    }

    for (int i = 1; i <= m; i++)
    {
        ll x, y, c;
        cin >> x >> y >> c;
        Union(x, y, c);
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        ll cnt = 0;
        for (int i = 1; i <= m; i++)
        {
            if (find(x, i) == find(y, i))
                ++cnt;
        }

        cout << cnt << endl;
    }

    return 0;
}