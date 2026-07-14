/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-06-30
 * Time : 22:05:32
 * Problem Name : B_Good_times_Good_times
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
    ll cnt = 0;
    while (n)
    {
        n /= 10;
        ++cnt;
    }

    cout << 1;
    for (int i = 1; i < cnt;i++)
        cout << 0;
    cout << 1 << endl;
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