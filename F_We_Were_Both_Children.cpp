/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-20
 * Time : 18:37:58
 * Problem Name : F_We_Were_Both_Children
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
    ll n;
    cin >> n;
    vec v;
    map<ll, ll>mp;
    for (int i = 0;i < n;i++) {

        ll x;
        cin >> x;
        if (mp[x] == 0) {

            v.push_back(x);
            ++mp[x];
        }
        else {
            ++mp[x];
        }
    }

    sort(v);
    ll mx = v.back();
    vec ans(n + 1, 0);
    
    for (auto i : v) {
 
        for (ll j = i; j <=n; j += i) {
            ans[j] += mp[i];
        }
    }

    ll aa = 0;
    for (auto i : v) {
        ll x = ans[i];
        aa = max(x, aa);

    }
    cout << aa << endl;
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