#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void arif()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a;
    ll count = 0;
    ll extra = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll v;
        cin >> v;
        if (v >= x)
        {
            count++;
            extra += (v - x);
        }
        else
        {
            a.push_back(v);
        }
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        if (extra < (x - a[i]))
        {
            break;
        }
        extra -= (x - a[i]);
        count++;
    }

    cout << count << "\n";
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