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
    vector<ll> b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }
    vec v;
    for (int i = n - 1; i >= 1; i--)
    {
        if (b[i] % b[i - 1] != 0)
        {
            v.push_back(b[i]);
            v.push_back(b[i - 1]);
        }
    }
    reverse(v.begin(), v.end());

    for(auto i : v){
        cout << i << endl;
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


