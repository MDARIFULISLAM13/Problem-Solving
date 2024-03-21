#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void arif()
{
    ll n, k;
    cin >> n >> k;

    ll l = 1, h = k;
    if (n > k)
    {

        k = n + (n % k);
    }
    ll ans = 1;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        ll cheek = mid * n;

        if (cheek == k)
        {
            ans = mid;
            break;
        }
        else if (cheek > k)
        {
            ans = mid;
            h = mid - 1;
        }
        else if (cheek < k)
        {
            l = mid + 1;
        }
    }
    cout << ans << "\n";
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