#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void arif()
{
    ll n;
    cin >> n;
    int count = 0;
    int v;
    vector<ll> pv;

    for (ll i = 1; i <= n; i++)
    {
        v = pow(i, 2);
        if (v > n)
        {
            break;
        }
        else
            pv.push_back(v);
    }
    for (ll i = 1; i <= n; i++)
    {
        v = pow(i, 3);
        if (v > n)
        {
            break;
        }
        else
            pv.push_back(v);
    }
    sort(pv.begin(), pv.end());
    pv.erase(unique(pv.begin(), pv.end()), pv.end());
    count = pv.size();
    cout << count << endl;
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