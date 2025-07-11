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
    int n, j, k;
    cin >> n >> j >> k;
    vec v;
    int val = 0;
    map<int, bool> mp;
    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;
        if (i + 1 == j)
        {
            val = x;
        }
        if (mp[x] == 0)
        {
            mp[x] = 1;
            v.push_back(x);
        }
    }
    sort(v.rbegin(), v.rend());

    if (k >= 2)
    {
        cout << "YES\n";
        return;
    }
    if (val != v.front())
    {
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
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