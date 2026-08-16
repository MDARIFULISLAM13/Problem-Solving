/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-16
 * Time : 17:09:03
 * Problem Name : C_1_Marenol_easy_version
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
    string a, b;
    cin >> a >> b;

    ll a00 = 0, a01 = 0, a11 = 0, a10 = 0;
    ll b00 = 0, b01 = 0, b10 = 0, b11 = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (a[i] == '0')
            {
                a00++;
            }
            else
            {
                a01++;
            }
        }
        else
        {
            if (a[i] == '0')
            {
                a10++;
            }
            else
            {
                a11++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (b[i] == '0')
            {
                b00++;
            }
            else
            {
                b01++;
            }
        }
        else
        {
            if (b[i] == '0')
            {
                b10++;
            }
            else
            {
                b11++;
            }
        }
    }

    if (a00 == b00 && a11 == b11 && a01 == b01 && a10 == b10)
    {

        vec v11, v01;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1' && b[i] != '1')
            {
                if (i % 2 == 0)
                {
                    v01.push_back(i);
                }
                else
                {
                    v11.push_back(i);
                }
            }
        }
        rev(v11);
        rev(v01);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '1' && a[i] != '1')
            {

                if (i % 2 == 0)
                {

                    ll x = v01.back();
                    v01.pop_back();
                    ans += (abs(x - i) / 2);
                }
                else
                {
                    ll x = v11.back();
                    v11.pop_back();
                    ans += (abs(x - i) / 2);
                }
            }
        }

        cout << ans << endl;
    }
    else
        cout << -1 << endl;
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