/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-23
 * Time : 18:59:43
 * Problem Name : A_Good_Contest
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
    ll x = 1e9;
    for (int i = 0; i < 3; i++)
    {
        ll y;
        cin>>y;
        x=min(x,y);
    }
    cout<<n-x<<endl;
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