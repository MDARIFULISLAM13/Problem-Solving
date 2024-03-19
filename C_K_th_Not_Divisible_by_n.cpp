#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void arif()
{
    ll a, b;
    cin >> a >> b;
    ll l = b, h = 1e18;
    while (l <= h)
    {

        ll mid = (l + h) / 2;

        ll ans = mid - (mid / a);

        if (ans == b)
        {
            if (mid % a == 0)
            {
                mid -= 1;
            }

            cout << mid << "\n";
            return;
        }
        else if (ans > b)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}