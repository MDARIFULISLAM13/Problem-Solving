/**
 *
 * Author : Md.Ariful Islam
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
void arif()
{
    ll n, p, l, t;
    cin >> n >> p >> l >> t;
    ll ans = 0;
    ll ex = 1 + (n - 1) / 7;

    ans += (ex * t);

    if (ans >= p)
    {
        cout << n - 1 << endl;
        return;
    }
    ll ck = p - ans;
    ll day = (ck / l);
    if (ck % l != 0)
    {
        day += 1;
    }
    ll f = (n - day);
    if (f < 0)
    {
        f = 0;
    }
    cout << f << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        arif();
    }
    return 0;
}