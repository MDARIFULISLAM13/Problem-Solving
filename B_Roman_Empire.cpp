

/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-28
 * Time : 19:43:10
 * Problem Name : B_Roman_Empire
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
vector<pair<int, string>> pp = {
    {1, "I"},
    {4, "IV"},
    {5, "V"},
    {9, "IX"},
    {10, "X"},
    {40, "XL"},
    {50, "L"},
    {90, "XC"},
    {100, "C"},
    {400, "CD"},
    {500, "D"},
    {900, "CM"},
    {1000, "M"}};

void solve()
{

    vector<pair<int, string>> p = pp;
    ll x;
    cin >> x;
    while (x > 0)
    {
        auto i = p.back();

        if (i.first > x)
        {
            p.pop_back();
        }
        else
        {
            cout << i.second;
            x -= i.first;
        }
    }
    cout << endl;
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