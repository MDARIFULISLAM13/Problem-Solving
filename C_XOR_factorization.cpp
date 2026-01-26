// Author: Kevin
#include <bits/stdc++.h>
// #pragma GCC optimize("O2")
using namespace std;
#define pb emplace_back
#define mp make_pair
#define ALL(x) (x).begin(), (x).end()
#define rALL(x) (x).rbegin(), (x).rend()
#define srt(x) sort(ALL(x))
#define rev(x) reverse(ALL(x))
#define rsrt(x) sort(rALL(x))
#define sz(x) (int)(x.size())
#define inf 0x3f3f3f3f
#define lb(v, x) (int)(lower_bound(ALL(v), x) - v.begin())
#define ub(v, x) (int)(upper_bound(ALL(v), x) - v.begin())
#define uni(v) v.resize(unique(ALL(v)) - v.begin())
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using i128 = __int128_t;
void die(string S)
{
    puts(S.c_str());
    exit(0);
}
int ans[100100];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k & 1)
        {
            for (int i = 1; i <= k; i++)
                cout << n << " ";
            cout << '\n';
        }
        else
        {
            for (int i = 1; i <= k; i++)
                ans[i] = 0;
            vector<int> ok, nok;
            for (int i = 1; i <= k; i++)
                nok.pb(i);
            for (int i = 30; i >= 0; i--)
            {
                if (n >> i & 1)
                {
                    if (sz(nok))
                    {
                        for (int j = 1; j <= k; j++)
                            if (j != nok.back())
                                ans[j] ^= (1 << i);
                        ok.pb(nok.back());
                        nok.pop_back();
                    }
                    else
                    {
                        for (int j = 1; j < k; j++)
                            ans[j] ^= (1 << i);
                    }
                }
                else
                {
                    for (int j = 1; j < sz(ok); j += 2)
                    {
                        ans[ok[j]] ^= (1 << i);
                        ans[ok[j - 1]] ^= (1 << i);
                    }
                }
            }

            ll sum = 0;
            for (int i = 1; i <= k; i++){
                cout << ans[i] << " ";

                sum += ans[i];
            }
            cout << '\n';

            cout << sum << endl;
        }
    }
    return 0;
}