/**
 *
 * Author : Md. Ariful Islam
 * Date : 14-01-2025
 * Time : 00:42:05
 * Problem Name : B_Vanya_and_Lanterns
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define endl "\n";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, l;
    cin >> n >> l;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double max_gap = 0;
    for (int i = 0; i < n - 1; i++) {
        max_gap = max(max_gap, (double)(a[i + 1] - a[i]));
    }

    double result = max_gap / 2.0;
    result = max(result, (double)(a[0] - 0));
    result = max(result, (double)(l - a[n - 1]));

    cout << fixed << setprecision(10) << result << endl;
    return 0;
}
