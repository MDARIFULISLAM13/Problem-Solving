#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 0, cn = 0;
        ll st = 0, v;
        for (int i = 0; i < n; i++)
        {
            cin >> v;
            sum += abs(v);
            if (v < 0)
            {
                st++;
            }
            if (v > 0 && st > 0)
            {
                cn++;
                st = 0;
            }
            if (st > 0 && i == (n - 1))
            {
                cn++;
            }
        }
        cout << sum << " " << cn << "\n";
    }
    return 0;
}