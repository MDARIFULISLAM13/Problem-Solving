/**
 *
 * Author : Md.Ariful Islam
 * Date : 09-05-2025
 * time : 16:10:34
 * Problem Name : C_Alice_Bob_and_Chocolate
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
#define mem(dp, i) memset(dp, i, sizeof(dp));

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll l = 1, h = n;
    ll a[n + 1];
    ll b[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    ll A = 0, B = 0;
    bool ok = 1;
    while (l <= h)
    {

        if (l == h)
        {

            if (a[l] == b[l])
            {
                A++;
                break;
            }
            else
            {
                if (ok == 0)
                {
                    A++;
                }
                else
                {
                    B++;
                }
                break;
            }
        }

        ll x = min(a[l], a[h]);

        a[l] -= x;
        a[h] -= x;
        if (a[l] == 0)
        {

            l++;
            A++;
            ok = 1;
        }
        if (a[h] == 0)
        {

            h--;
            B++;
            ok = 0;
        }
    }

    cout << A << " " << B;

    return 0;
}
