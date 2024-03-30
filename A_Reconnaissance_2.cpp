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
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        a.push_back({v, i});
    }
    a.push_back({a[0].first, 1});

    ll mn = INT_MAX;
    int index = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i].first - a[i - 1].first < mn)
        {
            mn = a[i].first - a[i - 1].first;
            index = i;
        }
    }
    cout << index;

    return 0;
}
