/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-01-26
 * Time : 22:19:31
 * Problem Name : D_Monster_Game
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
    map<ll, int> mp;
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }

    ll pre_sum = 0;
    map<ll, ll> pre_a;

    for (auto i = mp.rbegin(); i != mp.rend(); i++)
    {
        pre_sum += i->second;
        pre_a[i->first] = pre_sum;
    }

    vec diff(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> diff[i];
        diff[i] += diff[i - 1];
    }

    ll ans = 0;
    for (auto i : mp)
    {

        ll t = pre_a[i.first];

        ll low = 0, high = n;

        while (low <= high)
        {
            ll mid = (low + high) / 2;

            if (diff[mid] <= t)
            {
                ans = max(ans, mid * i.first);
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        // cout << i.first << " -> " << pre_a[i.first] << "\n";
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