/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-03-14
 * Time : 20:38:28
 * Problem Name : A_Bingo_Candies
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
    map<int, int> mp;
    for (int i = 0; i < n*n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    if (n == 1)
    {
        no return;
    }
    ll x = n * (n - 1);
    for (auto i : mp)
    {
        if(i.second>x){
            no return;
        }
    }
    yes
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