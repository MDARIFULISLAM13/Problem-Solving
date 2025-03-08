/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-03-2025
 * time : 01:30:14
 * Problem Name : C_Exams
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
#define mem(dp, i) memset(dp, i, sizeof(dp));

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<pair<ll, ll>> a;
    vector<pair<ll, ll>> b;
    for (int i = 0; i < n; i++)
    {
        ll u, v;
        cin >> u >> v;
        a.push_back({u, v});
        b.push_back({v, u});
    }
    sort(a.begin(), a.end());
    ll best = -1;
    for (int i = 0; i < n; i++)
    {

        if (best <= a[i].second)
        {
            best = a[i].second;
        }
        else
        {
            best = a[i].first;
        }
    }

    cout << best << endl;

    return 0;
}