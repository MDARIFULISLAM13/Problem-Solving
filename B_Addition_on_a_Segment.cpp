/**
 *
 * Author : Md.Ariful Islam
 * Problem Name : B_Addition_on_a_Segment (Solution)
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());

bool check(ll k, ll n,  vec &b, ll sum)
{
    if (b[k - 1] == 0)
        return false;

    ll x = sum - k;
    if (x < n - 1)
        return false;

    ll mx = b[0] - 1;
    if (k < n)
        mx = max(mx, b[k]);

    if (mx > n - 1)
        return false;

    return true;
}

void solve()
{
    ll n;
    cin >> n;

    vec v(n);
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    sort(v);
    rev(v);

    ll l = 1, h = n, ans = 1;

    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (check(mid, n, v, sum))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
