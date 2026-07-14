/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-07-14
 * Time : 16:15:19
 * Problem Name : B_Cake_Leveling
 *
 **/
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
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n;
    cin >> n;

    vec v(n);
    for (auto &i : v)
        cin >> i;

    ll ex = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans == 0)
        {
            ans = v[i];
            cout << ans << " ";
        }
        else
        {
            if (v[i] >= ans)
            {
                ex += (v[i] - ans);
            }
            else
            {

                ll x = abs(v[i] - ans);
                if (ex >= x)
                {
                    ex -= x;
                }
                else
                {

                    x -= ex;
                    ex = 0;

                    ll y = (x + (i - 1)) / i;

                    ans -= y;
                    x -= y;
                    ex = y * i;
                    ex -= x;

                    x = 0;
                    if (ex >= i + 1)
                    {

                        ll aa = ex / (i + 1);
                        ans += aa;
                        ex -= (aa * (i + 1));
                    }
                }
            }

            cout << ans << " ";
        }
    }
    cout << endl;
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