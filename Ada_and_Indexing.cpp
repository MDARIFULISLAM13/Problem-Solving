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
void solve(){
    int n, q;
    cin >> n >> q;

    vector<string> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());


    while (q--)
    {
        string ss;
        cin >> ss;

        string ns = ss;
        ns.back()++;

        auto lower = lower_bound(v.begin(), v.end(), ss);
        auto upper = lower_bound(v.begin(), v.end(), ns);

        cout << upper - lower << "\n";
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