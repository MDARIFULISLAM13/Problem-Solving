#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll count = 0, countl = 0, f1 = 0, fl = 1;
        int v;
        for (ll i = 0; i < n; i++)
        {
            cin >> v;
            if (v == 1)
            {
                f1 = 1;
                fl = 1;
            }
            if (v == 0)
            {
                fl = 0;
            }
            if (f1 == 1 && v == 0)
            {
                countl++;
            }
            if (fl == 1)
            {
                count += countl;
                countl = 0;
            }
        }
        cout << count << "\n";
    }
    return 0;
}