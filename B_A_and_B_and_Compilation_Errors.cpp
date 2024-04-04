/**
 *
 * Author : Md.Ariful Islam
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> a;
    vector<ll> b;
    vector<ll> c;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    for (int i = 1; i < n; i++)
    {
        int v;
        cin >> v;
        b.push_back(v);
    }
    for (int i = 2; i < n; i++)
    {
        int v;
        cin >> v;
        c.push_back(v);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << a[i] << endl;
            break;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] != c[i])
        {
            cout << b[i] << endl;
            break;
        }
    }
    return 0;
}
