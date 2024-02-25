#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum_a = 0, cn1 = 0;
    for (int x : a)
    {
        sum_a += x;
        if (x == 1)
        {
            cn1++;
        }
    }
    if (sum_a >= cn1 + n && n > 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}