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
    int n;
    cin >> n;
    vec v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = i;
    }

    while (!v.empty())
    {
        bool f = 0;
        for (int i = 0; i < v.size() - 1; i++)
        {
            ll y = v.back() + v[i];
            if ((y - 3) % 4 == 0)
            {
                v.pop_back();
                v.erase(v.begin() + i);
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            cout << "Alice\n";
            return;
        }
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