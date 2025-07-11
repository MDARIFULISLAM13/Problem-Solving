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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll v = k * 2;
    v -= 1;
    if (n <= v)
    {
        cout << "Alice\n";
        return;
    }
    ll cnt = 0;
    for (auto i : s)
    {
        if (i == '1')
            ++cnt;
    }
    if (cnt <= k)
    {
        cout << "Alice\n";
        return;
    }
    cout << "Bob\n";
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