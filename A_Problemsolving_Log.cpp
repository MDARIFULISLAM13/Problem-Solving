/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-10
 * Time : 04:32:47
 * Problem Name : A_Problemsolving_Log
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
    map<char, int> mp;

    ll cnt = 0;
    for (auto i : s)
        mp[i]++;

    for (auto i : mp)
    {
        char c = i.first;
        int x = c - 'A' + 1;

        if (x <= i.second)
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