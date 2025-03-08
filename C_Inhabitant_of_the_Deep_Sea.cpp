/**
 *
 * Author : Md.Ariful Islam
 * Date : 08-03-2025
 * time : 15:39:12
 * Problem Name : C_Inhabitant_of_the_Deep_Sea
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
#define mem(dp,i) memset(dp,i,sizeof(dp));

void arif()
{
    ll n, k;
    cin >> n >> k;
    ll a[n + 1];
    ll total = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        total += a[i];
    }
    if (total <= k)
    {
        cout << n << endl;
        return;
    }

    ll count = 0;
    int i = 1, j = n;
    while (k > 0)
    {

        ll x = min(a[i], a[j]);
        if ((x + x - 1) <= k)
        {
            k -= (x + x - 1);
            a[i] -= x;
            a[j] -= (x - 1);
            if (k > 0)
            {
                a[j] -= 1;
                k--;
            }
        }
        else
        {

            k = 0;
        }
        if (a[i] == 0)
        {
            i++;
            count++;
        }
        if (a[j] == 0)
        {
            j--;
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}