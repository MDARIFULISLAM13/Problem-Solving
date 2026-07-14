/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-07-14
 * Time : 20:45:50
 * Problem Name : B_Nikita_and_Books
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
    ll sum = 0;
    ll a = 0;
    bool ok = true;

    for (int i = 1; i <= n; i++)
    {
        ll v;
        cin >> v;
        sum += i;
        a += v;
        if (sum > a)
        {
            ok = false;
        }
    }
    if(ok)yes else no
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