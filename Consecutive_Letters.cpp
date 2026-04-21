/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-04
 * Time : 16:38:35
 * Problem Name : Building_Roads
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
#define mem(dp, i) memset(dp, i, szof(dp));

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
void solve()
{

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        make(i);
    }
    ll x = s.size();
    for (int i = 1; i < x; i++)
    {
        if (s[i] == s[i - 1])
        {
            Union(i - 1, i);
        }
    }

    ll q;
    cin >> q;



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}