/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-08
 * Time : 21:09:35
 * Problem Name : C_Cake_Assignment
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
// #define ull unsigned long long
#define vec vector<ll>
#define rsort(a) sort(a.rbegin(), a.rend());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll k, x;
    cin >> k >> x;
    vec v;

    ll t = 1LL << (k + 1);

    ll a = x, b = t - x;

    while (true)
    {

        if (a == b)
        {
            break;
        }

        if (a < b)
        {
            b -= a;
            a *= 2;

            v.push_back(1);
        }
        else
        {

            a -= b;
            b *= 2;
            v.push_back(2);
        }
    }

    reverse(v.begin(), v.end());
    cout << v.size() << endl;

    for (auto i : v)
        cout << i << " ";
    cout << endl;
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