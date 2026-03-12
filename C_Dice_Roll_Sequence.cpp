/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-03-11
 * Time : 19:52:06
 * Problem Name : C_Dice_Roll_Sequence
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
    vec v(n);
    for (auto &i : v)
        cin >> i;

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ll x = 7 - v[i];
        if (v[i + 1] == x || v[i]==v[i+1])
        {
            ++cnt;
            ++i;
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