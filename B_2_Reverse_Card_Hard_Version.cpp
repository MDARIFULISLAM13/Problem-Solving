
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
const int lm = 1e7 + 123;
bitset<lm> ip;
vector<int> p;

void solvee()
{
    ll n, m;
    cin >> n >> m;
    ll ans = n;
    ll nn = sqrt(n) + 10;
    for (int i = 2; i <= min(nn, m); i++)
    {
        ll f = i * (i - 1);
        ll s = f + f + i;
        ll diff = (s - f);
        int ok = 0;
        ll y = n;

        if (f <= y)
        {
            ++ans;
            y -= f;
            ok = 1;
        }

        ans += (y / diff);
    }
    cout << ans << endl;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0;

    for (int i = 1; i <= n; i++)
    {
        ll cnt = 0;
        for (int j = 1; j <= m; j++)
        {

            if ((i * __gcd(i, j) % (i + j)) == 0)
            {
               cout << i << " " << j << endl;
                ++ans;
                ++cnt;
            }
        }
       // cout << i << " " << cnt << endl;
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
