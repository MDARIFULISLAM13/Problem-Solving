/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-10-05
 * Time : 23:37:16
 * Problem Name : D_Batteries
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define mem(dp, i) memset(dp, i, sizeof(dp));

bool cmp(pair<int, int> a, pair<int, int> b)
{
    int d1 = a.second - a.first;
    int d2 = b.second - b.first;
    if (d1 != d2)
        return d1 < d2;
    return a.first < b.first;
}

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> qq;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            qq.push_back({i, j});
        }
    }

    sort(qq.begin(), qq.end(), cmp);

    for (auto &q : qq)
    {
        cout << q.first << " " << q.second << endl;
        int x;
        cin >> x;
        if (x == -1)
            exit(0);
        if (x == 1)
        {
            break;
            return;
        }
    }
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
