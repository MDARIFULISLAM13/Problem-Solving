#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        if (y < x)
        {
            cout << x << endl;
        }
        else if (x + k >= y && x < y)
        {
            cout << y << endl;
        }
        else
        {
            ll ans = (x + k) + (2 * (y - (x + k)));
            cout << ans << endl;
        }
        {
        }
    }
}