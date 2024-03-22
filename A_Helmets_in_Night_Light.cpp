#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void arif()
{
    ll n, p;
    cin >> n >> p;
    vector<ll> a;
    vector<ll> b;
    for (int i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;
        a.push_back(ai);
    }
    for (int i = 0; i < n; i++)
    {
        ll bi;
        cin >> bi;
        b.push_back(bi);
    }

    vector<pair<ll, ll>> final;
    for (int i = 0; i < n; i++)
    {
        if (b[i] < p)
        {
            final.push_back(make_pair(b[i], a[i]));
        }
    }
    sort(final.begin(), final.end());

    ll cost = p;
    n -= 1;
    if (!final.empty() && n != 0)
    {
        for (int i = 0; i < final.size(); i++)
        {
            ll x = final[i].second;
            n -= x;
            if (n < 0)
            {
                x -= abs(n);
                n = 0;
            }
            cost += (x * final[i].first);
            if (n <= 0)
            {
                break;
            }
        }
    }
    if (n >= 0)
    {
        cost += (n * p);
    }
    cout << cost << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}
