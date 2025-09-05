/**https://codeforces.com/problemset/problem/2025/C
 *
 * Author : Md.Ariful Islam
 * Date : 17-07-2025
 * time : 18:40:49
 * Problem Name : C_New_Game
 *
 **/
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
    ll n, k;
    cin >> n >> k;
    vec v;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (mp[x] == 0)
        {
            v.push_back(x);
        }
        mp[x]++;
    }
    sort(v.begin(), v.end());

    ll N = v.size();

    vec pre(N);

    pre[0] = mp[v[0]];
    int pv = pre[0];
    if (v[0] + 1 != v[1])
    {
        pv = 0;
    }
    for (int i = 1; i < N; i++)
    {
        pre[i] = pv + mp[v[i]];
        pv = pre[i];
        if (v[i] + 1 != v[i + 1])
        {
            pv = 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        //cout << v[i] << " " << pre[i] << endl;
    }

    ll ans = 0;
    --k;
    for (int i = 0; i < N; i++)
    {
        if (v[i + k] == v[i] + k)
        {
            if (i == 0 || v[i - 1] != v[i] - 1)
            {
                ans = max(ans, pre[i + k]);
            }
            else
            {
                ll npre = pre[i + k] - pre[i - 1];
                ans = max(ans, npre);
            }
        }
        else
        {
            ll low = 0, high = k;
            ll ind = i;

            while (low <= high)
            {
                ll mid = (low + high) / 2;

                if (v[i + mid] == v[i] + mid)
                {
                    ind = i + mid;
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }

            if (i == 0 || v[i - 1] != v[i] - 1)
            {
                ans = max(ans, pre[ind]);
            }
            else
            {
                ll npre = pre[ind] - pre[i - 1];
                ans = max(ans, npre);
            }
        }
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
