/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-20
 * Time : 12:07:06
 * Problem Name : B_Stubborn_Pen
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
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
    ll cnt = 0;
    for (auto i : s)
    {
        if (ok == false && i != 'R')
        {
            ++cnt;
        }
        else if (ok == true && i != 'B')
        {
            ++cnt;
        }
        else
        {
            if (ok == true)
            {
                ok = false;
            }
            else
            {
                ok = true;
            }
        }
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