/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-15
 * Time : 23:17:18
 * Problem Name : B_Tab_Closing
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
    ll a, b, n;
    cin >> a >> b >> n;
    ll x = a / n;

    
    if (x >= b || a<=b)
    {
        cout << 1 << endl;
        return;
    }
    cout<<2<<endl;
    return;
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