/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-01-26
 * Time : 19:47:07
 * Problem Name : A_DBMB_and_the_Array
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
    ll n, s, x;
    cin >> n >> s >> x;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        sum += v;
    }
    if (sum > s || (s - sum) % x != 0)
    {
        cout << "NO\n";
    }
    else{
        yes
    }
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