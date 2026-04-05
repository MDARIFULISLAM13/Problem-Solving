/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-05
 * Time : 20:18:52
 * Problem Name : D_Cutting_a_graph
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++)
        make(i);

    while (m--)
    {
        ll x, y;
        cin >> x >> y;
        // Union(x, y);
    }
    ll kk = k;
    vector<pair<string, pair<int, int>>> v;

    while (kk--)
    {
        string s;
        cin >> s;

        ll x, y;
        cin >> x >> y;

        v.push_back({s, {x, y}});
    }

    vector<string> ss;
    for (int i = k - 1; i >= 0; i--)
    {
        string s = v[i].first;
        ll x = v[i].second.first;
        ll y = v[i].second.second;
        if (s == "ask")
        {

            if (find(x) == find(y))
            {
                ss.push_back("YES\n");
            }
             else
                 ss.push_back("NO\n");
        }
        else
        {
            Union(x, y);
        }
    }
    rev(ss);

    for(auto i : ss)
        cout << i;

    return 0;
}