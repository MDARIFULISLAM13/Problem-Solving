/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-16
 * Time : 06:50:03
 * Problem Name : A_K_Is_Important
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

void solve()
{
    ll n, k;
    cin >> n >> k;
    vec v;
    ll sum = 0;

    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (i < k || i > (n - k + 1))
        {
            v.push_back(x);
        }
        else
        {
            sum += x;
        }
    }

    ll l = 0, r = v.size() - 1;

    ll cnt = v.size();
    while (l < r)
    {
        if (cnt < k)
            break;

        sum += max(v[l], v[r]);
        l++;
        r--;
        --cnt;
    }

    cout << sum << endl;
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