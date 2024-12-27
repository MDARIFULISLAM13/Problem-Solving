/**
 *
 * Author : Md.Ariful Islam
 * Date : 22-12-2024
 * time : 21:26:53
 * Problem Name : D_Counting_Pairs
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
#define mem(dp,i) memset(dp,i,sizeof(dp));
void solve() {
    ll n, x, y;
    cin >> n >> x >> y;

    vec a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll total_sum = accumulate(a.begin(), a.end(), 0LL);

    ll low = total_sum - y;
    ll up = total_sum - x;

    sort(a.begin(), a.end());

    ll result = 0;

    for (ll i = 0; i < n - 1; ++i) {
        ll target = low - a[i];


        ll left = lower_bound(a.begin() + i + 1, a.end(), target) - a.begin();
        ll right = upper_bound(a.begin() + i + 1, a.end(), up - a[i]) - a.begin();

        result += (right - left);
    }

    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }


    return 0;
}
