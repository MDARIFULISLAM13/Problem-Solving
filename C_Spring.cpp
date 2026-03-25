/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-03-16
 * Time : 20:49:29
 * Problem Name : C_Spring
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));
ll lcm(ll x, ll y)
{
    ll ans= x / __gcd(x, y) * y;
    return ans;
}
void solve()
{
    ll a, b, c, m;
    cin >> a >> b >> c >> m;

    ll a1 = m / a, b1 = m / b, c1 = m / c;
    ll ab = m / lcm(a, b), ac = m / lcm(a, c), bc = m / lcm(b, c), abc = m / lcm(lcm(a, b), c);

    a1 = a1 - ab - ac + abc;
    b1 = b1 - ab - bc + abc;
    c1 = c1 - ac - bc + abc;

    ab = ab - abc;
    ac = ac - abc;
    bc = bc - abc;

    cout << a1 * 6 + ab * 3 + ac * 3 + abc * 2 << " "
         << b1 * 6 + ab * 3 + bc * 3 + abc * 2 << " "
         << c1 * 6 + ac * 3 + bc * 3 + abc * 2 << endl;
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