/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-14
 * Time : 21:59:43
 * Problem Name : K_Time_Display_Stickers
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
    ll cnt0 = 0, cnt1 = 0, ext = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            ++cnt0;
        }
        if (s[i] == '1')
        {
            ++cnt1;
        }
        if (s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
        {
            ++ext;
        }
    }
    n -= cnt0;
    n -= cnt1;
    n -= ext;
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