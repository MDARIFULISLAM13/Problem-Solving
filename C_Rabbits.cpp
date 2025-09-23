/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-23
 * Time : 23:40:16
 * Problem Name : C_Rabbits
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

    bool ok = false;

    for (int i = 0; i < n;)
    {

        if (s[i] == '0' && i == 0)
        {
            ok = true;
            while (s[i] == '0')
            {
                ++i;
            }
        }
        else if (s[i] == '0' && s[i + 1] == '0')
        {
            ok = true;
            while (s[i] == '0')
            {
                ++i;
            }
        }
        else if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
        {
            i += 3;

            if (s[i] == '0')
            {
                ok = true;
                while (s[i] == '0')
                {
                    ++i;
                }
            }
        }
        else if (s[i] == '0' && s[i + 2] == '1')
        {

            if (ok)
            {
                ok = false;
                ++i;
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
        else if (s[i] == '0' && s[i + 1] == '1' && i + 2 == n)
        {
            if (ok)
            {
                ok = false;
                ++i;
            }
            else
            {
                cout << "NO\n";
                return;
            }
            ++i;
        }

        else
        {

            if (s[i] == '1' && s[i + 1] == '1')
            {
                ok = false;
            }

            ++i;
        }
    }

    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}