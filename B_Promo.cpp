#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(0);
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vector<ll> prefixsum(n + 1);
    prefixsum.push_back(0);
    for (int i = 0; i < n; i++)
    {
        prefixsum[i + 1] = a[i] + prefixsum[i];
    }

    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        ll index = x - y;
        ll last = n - 1 - index;
        ll fast = last - y + 1;
        ll sum = prefixsum[last + 1] - prefixsum[fast];
        cout << sum << "\n";
    }
    return 0;
}
