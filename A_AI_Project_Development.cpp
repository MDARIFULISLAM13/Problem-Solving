/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-06-09
 * Time : 20:37:51
 * Problem Name : A_AI_Project_Development
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

void solve()
{
    ll n, x, y, z;
    cin >> n >> x >> y >> z;

    ll aa = x + y;

    ll ans1 = n / aa;
    if (n % aa != 0)
        ++ans1;

    ll ans2 = z;
    n -= z * x;

    if (n > 0)
    {
        y *= 10;
        aa = x + y;
        ans2 += n / aa;
        if (n % aa != 0)
            ++ans2;
    }

    cout << min(ans1, ans2) << endl;
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