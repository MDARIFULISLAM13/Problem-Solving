/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-09
 * Time : 20:31:11
 * Problem Name : Unequal_Shuffle
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
    string a, b;
    cin >> a >> b;
    ll cnta = 0, cntb = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'a')
            ++cnta;

        else
            ++cntb;
    }
    ll cntaa = 0, cntbb = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 'a')
            ++cntaa;

        else
            ++cntbb;
    }
    if (cnta == cntbb && cntb == cntaa)
        yes else no;
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