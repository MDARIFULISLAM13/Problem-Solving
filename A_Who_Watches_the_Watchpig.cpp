/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-07-16
 * Time : 20:50:52
 * Problem Name : A_Who_Watches_the_Watchpig
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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k * 2 > n)
    {
        cout << -1 << endl;
        return;
    }

    ll cnt = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'L')
            ++cnt;
    }
    for (int i = n - 1; i >= n - k; i--)
    {
        if (s[i] == 'R')
            ++cnt;
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