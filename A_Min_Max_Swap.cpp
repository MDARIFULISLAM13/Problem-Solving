#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        ll fmx = INT_MIN, smx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            fmx = max(fmx, max(a[i], b[i]));
            smx = max(smx, min(a[i], b[i]));
        }
        cout << fmx * smx << endl;
    }
}