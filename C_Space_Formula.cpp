/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-01-22
 * Time : 19:16:02
 * Problem Name : C_Space_Formula
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
    ll n, k;
    cin >> n >> k;

    vec v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vec vv(n);
    for (int i = 0; i < n; i++)
        cin >> vv[i];

    ll ans = v[k - 1];
    v.erase(v.begin() + (k - 1));

    sort(v);
    rev(v);
    sort(vv);
    ans += vv.back();
    vv.pop_back();

    ll cnt = 1;

    vec av;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] + vv[0] > ans)
        {

            ll x = v[i] + vv.back();
            vv.pop_back();
            av.push_back(x);
        }

        else
        {
            for (int j = 0; j < vv.size(); j++)
            {
                if()
            }
        }
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