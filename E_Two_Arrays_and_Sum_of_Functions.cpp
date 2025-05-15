
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
const ll MOD = 998244353;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = ((arr[i] % MOD) * 1LL * ((i + 1) % MOD) % MOD * 1LL * ((n - i) % MOD)) % MOD;
    }


    sort(arr, arr + n);
    ll brr[n];
    for (ll i = 0; i < n; i++)
        cin >> brr[i];
    sort(brr, brr + n, greater<ll>());

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans = (ans + arr[i] * 1LL * brr[i] % MOD) % MOD;
    }
    cout << ans << endl;
}


