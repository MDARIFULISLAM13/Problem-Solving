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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    ll mn_count = 0, mx_count = 0;
    ll mn = a[0], mx = a[n - 1];

    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            mn_count++;
        }
        if (a[i] == mx)
        {
            mx_count++;
        }
    }

    if (mn == mx)
    {
        cout << "0 " << n * (n - 1) / 2;
    }
    else
    {
        cout << mx - mn << " " << mn_count * mx_count;
    }

    return 0;
}
