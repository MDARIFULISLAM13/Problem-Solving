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


    if(a00==b00 && a11==b11 && a01 == b01 && a10 == b10)yes else no
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