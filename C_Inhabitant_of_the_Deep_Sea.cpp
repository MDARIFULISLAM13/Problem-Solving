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