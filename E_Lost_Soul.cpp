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
ll I = 0;
void solve()
{
    int n;
    cin >> n;
    vec a(n + 1);
    vec b(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    if (a[n] == b[n])
    {
        cout << n << endl;
        return;
    }

    map<int, int> mp;
    mp[a[n]]++;
    mp[b[n]]++;
    for (int i = n - 1; i >= 1; i--)
    {

        if ((a[i] == b[i]) || (a[i] == a[i + 1]) || (b[i] == b[i + 1]) || (mp[a[i]] > 1 || mp[b[i]] > 1) || (mp[a[i]] == 1 && b[i + 1] != a[i]) || (mp[b[i]] == 1 && a[i + 1] != b[i]))
        {
            cout << i << endl;
            return;
        }

        mp[a[i]]++;
        mp[b[i]]++;
    }
    cout << 0 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ++I;
        solve();
    }

    return 0;
}