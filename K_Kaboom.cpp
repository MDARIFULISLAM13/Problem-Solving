/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-28
 * Time : 23:19:51
 * Problem Name : K_Kaboom
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll x;
    cin >> x;

    ll l = 1, h = x;
    ll lf = 1000, rt = 1;

    while (l <= h)
    {
        ll mid = (l + h) / 2;
        cout << "? " << mid << " ";
        for (int i = 1; i <= mid; i++)
        {
            cout << i << " ";
        }

        cout << endl;
        string s;
        cin >> s;
        if (s == "Noboom")
        {
            l = mid + 1;
        }
        else
        {
            rt = mid;
            h = mid - 1;
        }
    }

    l = 1, h = rt;

    while (l <= h)
    {
        ll mid = (l + h) / 2;
        cout << "? " << (rt + 1) - mid << " ";
        for (int i = mid; i <= rt; i++)
        {
            cout << i << " ";
        }

        cout << endl;
        string s;
        cin >> s;
        if (s == "Noboom")
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
            lf = mid;
        }
    }

    cout << "! " << lf << " " << rt << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}