#ifdef _GNUC_
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
    int n;
    cin >> n;

    vector<string> v;
    map<string, int> mp;
    for (int i = 0; i < n; ++i)
    {

        string s;
        cin >> s;
        if (mp[s] != 0)
        {
            mp[s]++;
        }
        else
        {
            v.push_back(s);
            mp[s]++;
        }
    }

    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        string ss;
        cin >> ss;

        string ns = ss;
        ns.back()++;

        auto lower = lower_bound(v.begin(), v.end(), ss);
        auto upper = lower_bound(v.begin(), v.end(), ns);
        ll ans = 0;
        string as;
        for (auto i = lower; i < upper; i++)

        {
            if (mp[*i] >ans)
            {
                ans = mp[*i];
                as = *i;
            }
        }

        if (ans == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << as << " " << ans << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}