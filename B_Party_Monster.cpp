/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-30
 * Time : 20:40:16
 * Problem Name : B_Party_Monster
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
    string s;
    cin >> s;

    ll cnt0 = 0, cnt1 = 0;
    for (auto i : s)
    {
        if (i == ')')
            ++cnt0;
        else
            ++cnt1;
    }
    if(cnt0==cnt1)yes
    else no
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