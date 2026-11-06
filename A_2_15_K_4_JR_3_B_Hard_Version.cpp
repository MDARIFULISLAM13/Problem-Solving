/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-06
 * Time : 20:51:02
 * Problem Name : A_2_15_K_4_JR_3_B_Hard_Version
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));
void solve()
{
    ll n;
    cin >> n;

    vec v(n);
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v[i] = 1LL << x;
        cnt += v[i];
    }

    sort(v); 
    ll a = 0;
    ll cnt1 = cnt / 2;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a + v[i] <= cnt1)
        {
            a += v[i];
        }
    }

    ll b = cnt - a;

    cout << a * b << endl;
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