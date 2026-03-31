/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-03-31
 * Time : 19:55:05
 * Problem Name : B_Seats
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
    string s;
    cin >> s;
    if (n < 3)
    {
        cout << 1 << endl;
        return;
    }

    ll cnt = 0;

    ll zc = 0;
    bool f = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {

            if (f == 0)
            {
                f = 1;

                if (zc >= 2)
                {
                    zc -= 2;
                    ++cnt;
                }
                cnt += zc / 3;
            }

            else
            {
                f = 1;
                cnt += zc / 3;
            }
            ++cnt;
            zc = 0;
        }
        else
        {
            ++zc;
        }
    }

    if (f == 0)
    {
        cnt += zc / 3;

        if (f == 0 && zc % 3 != 0)
        {
            ++cnt;
        }
        zc = 0;
    }

    if (zc != 0)
    {
        if (zc >= 2)
        {
            zc -= 2;
            ++cnt;
        }
        cnt += zc / 3;
    }
    cout << cnt << endl;
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