/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-10-26
 * Time : 23:30:03
 * Problem Name : A_Maximize_One_MEX
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

ll ans(vec v, int k)
{
    map<int, bool> mp;
    ll cnt = 0;
    vec val;
    for (int i = 1; i < v.size(); i++)
    {

        mp[v[i]] = true;
        if (mp[cnt] == true)
        {
            while (mp[cnt] == true)
            {
                ++cnt;
            }
        }
        val.push_back(cnt);
    }
    --k;
    sort(val);
    rev(val);

    return val[k];
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vec v(n + 1);
    ll cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] == cnt)
        {
            ++cnt;
        }
        else
        {
            cnt = -1;
        }
    }
    if (cnt != -1)
    {
        cout << -1 << endl;
        return;
    }

    cnt = -1;
    ll ii = -1, jj = -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != j)
            {
                swap(v[i], v[j]);
                ll x = ans(v, k);
                if (x >= cnt)
                {
                    ii = i, jj = j, cnt = x;
                }
                swap(v[i], v[j]);
            }
        }
    }

    cout << min(ii,jj) << " " << max(ii,jj) << endl;
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