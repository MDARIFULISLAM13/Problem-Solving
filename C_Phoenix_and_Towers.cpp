/**
 *
 * Author : Md.Ariful Islam
 * Date : 05-06-2025
 * time : 23:28:18
 * Problem Name : C_Phoenix_and_Towers
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
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<int, int>> a; // value then index number
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        a.push_back({v, i});
    }

    sort(a.rbegin(), a.rend());

    set<pair<int, int>> s; // value then group number

    for (int i = 1; i <= m; i++)
    {
        s.insert({0, i});
    }

    vector<pair<int, int>> ans; // index number then group number

    for (auto i : a)
    {

        auto y = *s.begin();
        s.erase(y);
        y.first += i.first;
        s.insert(y);
        ans.push_back({i.second, y.second});
    }

    auto y = *s.begin();
    int pre = y.first;

    for (auto i : s)
    {
        if (abs(i.first - pre) > k)
        {
            cout << "NO\n";
            return;
        }
        pre = i.first;
    }

    sort(ans.begin(), ans.end());

    cout << "YES\n";
    for (auto i : ans)
    {
        cout << i.second << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}