/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-03-2025
 * time : 15:06:34
 * Problem Name : A_Rank_List
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

    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        a.push_back({u, v});
    }

    sort(a.begin(), a.end(), [](const pair<int, int> &x, const pair<int, int> &y)
         { return x.first > y.first || (x.first == y.first && x.second < y.second); });

    k -= 1;
    int cnt = 0;

    for (auto i : a)
    {

        if (i.first == a[k].first && i.second == a[k].second)
        {
            ++cnt;
        }
    }

    cout << cnt << endl;
    return 0;
}
