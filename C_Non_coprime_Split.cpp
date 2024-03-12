#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void arif()
{
    ll l, r;
    cin >> l >> r;
    if (r < 4)
    {
        cout << "-1\n";
        return;
    }
    for (ll i = r; i >= l; i--)
    {
        if (i % 2 == 0)
        {
            cout << "2 " << i - 2 << "\n";
            return;
        }
    }
    for (ll i = 2; i <= sqrt(l); i++)
    {
        if (l % i == 0)
        {
            ll ans = l / i;
            cout << ans << " " << l - ans;
            cout << "\n";
            return;
        }
    }
    cout << "-1\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
}