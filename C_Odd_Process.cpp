/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-12-12
 * Time : 15:33:43
 * Problem Name : C_Odd_Process
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
    vec even, odd;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            even.push_back(x);
        }
        else
        {
            odd.push_back(x);
        }
    }

    ll e = even.size();
    ll o = odd.size();

    sort(odd);
    sort(even);
    rev(even);

    if (o == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << 0 << " ";
        }
        cout << endl;
        return;
    }
    if (e == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << odd.back() << " ";
            }
        }
        cout << endl;
        return;
    }

    vec peven(e + 1);

    peven[0] = 0;

    for (int i = 1; i <= e; i++)
    {
        peven[i] = peven[i - 1] + even[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        ll x = i;

        if (x - 1 <= e)
        {
            ll sum = odd.back();
            --x;
            sum += peven[x];

            cout << sum << " ";
            continue;
        }

        if (i == n)
        {
            if (o % 2 == 0)
            {
                cout << 0 << " " ;
                continue;
            }
        }

        ll z = e + 1;
        if ((x - z) % 2 == 0)
        {
            ll sum = odd.back();
            sum += peven.back();
            cout << sum << " " ;
            continue;
        }
        else
        {
            ll sum = odd.back();
            sum += peven.back();
            sum -= even.back();
            cout << sum << " ";
            continue;
        }
    }
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