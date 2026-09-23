/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-23
 * Time : 19:03:31
 * Problem Name : B_Three_Piles
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
    ll a, b, c;
    cin >> a >> b >> c;
    ll x = abs(a - b);
    ll y = abs((a + c) - b);
    cout<<max(x,y)<<endl;
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