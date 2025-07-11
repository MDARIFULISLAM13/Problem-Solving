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
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        int v;
        cin >> v;
        mp[v]++;
    }

    ll ans = 0;
    ll pre = 0;
    while (m > 0)
    {

        ++ans;
        ll cnt = 0;
        for (auto i : mp)
        {
          if(i.second!=0){
            mp[i.first]--;
            --m;
            ++cnt;
          }

        }
        ll x = n - cnt;
        m -= pre;
        x -= pre;
        pre = x;
    }

    cout << ans << endl;
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