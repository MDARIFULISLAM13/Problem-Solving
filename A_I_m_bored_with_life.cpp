#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(0);
    ll a, b;
    cin >> a >> b;
    ll x = min(a, b);
    ll ans1 = 1;
    for (ll i = 2; i <= x; i++)
    {
        ans1 *= i;
    }
    cout << ans1 << endl;
}