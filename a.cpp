/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-07-03
 * Time : 20:57:14
 * Problem Name : a
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

vec v(1000000 + 1);
void solve()
{
    for (int i = 1; i <= 1000000; i++)
    {
        for (int j = i; j <= 1000000; j += i)
        {
            v[j]++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    vector<pair<ll, ll>> vv;
    for (int i = 1; i <= 1000000; i++)
    {
        vv.push_back({v[i], i});
    }

    sort(vv.begin(), vv.end(), [](pair<int, int> a, pair<int, int> b)
         {
             if (a.first == b.first)
                 return a.second > b.second;  
             return a.first < b.first; });

    int q;
    cin >> q; 
    while (q--)
    {
        int n;
        cin >> n;  

         cout << vv[n - 1].second << endl;
    }
    return 0;
}