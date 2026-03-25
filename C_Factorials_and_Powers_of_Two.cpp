/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-03-25
 * Time : 14:39:08
 * Problem Name : C_Factorials_and_Powers_of_Two
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

map<ll, bool> mp;
vec v;

void st()
{
    ll x = 1;
    for (ll i = 1; i <= 1e12; i++)
    {
        x *= i;
        if (x >= 1e12)
        {
            break;
        }
        mp[x] = true;
    }

    for (ll i = 1; i <= 1e12; i++)
    {
        ll y = pow(2, i);
        if (y >= 1e12)
        {
            break;
        }
        mp[y] = true;
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = __builtin_popcountll(n);
    ll sz = v.size();
    ll subsets = 1LL << sz; 

    for (ll mask = 0; mask < subsets; mask++)
    {
        ll sum = 0;
        ll count_fact = 0;

        for (ll i = 0; i < sz; i++)
        {
            if ((mask >> i) & 1)
            {
                sum += v[i];
                count_fact++;
            }
        }

        if (sum <= n)
        {
            ll remaining = n - sum;
            ll total_numbers = count_fact + __builtin_popcountll(remaining);
            ans = min(ans, total_numbers);
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    st();
    for (auto it : mp)
    {
        ll val = it.first;
        if ((val & (val - 1)) != 0)
        {
            v.push_back(val);
        }
    }
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}