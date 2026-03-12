/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-02-11
 * Time : 20:51:37
 * Problem Name : B_Array_and_Permutation
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
    ll n;
    cin >> n;
    vec v(n), a(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ps = 0;
    bool ok = true;

    for (int i = 0; i < n; i++)
    {
        if (i != 0 && a[i] == a[i - 1])
        {
            continue;
        }

        else
        {
            bool ck = true;

            while (ps < n)
            {
                if (v[ps] == a[i])
                {
                    ck = false;
                    ps++;
                    break;
                }
                ps++;
            }

            if (ck)
            {
                ok = false;
                break;
            }
        }
    }

    if (ok)
        yes else no;
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