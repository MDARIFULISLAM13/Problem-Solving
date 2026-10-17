/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-10-17
 * Time : 21:13:20
 * Problem Name : C_I_Know_About_a_Million_Things
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
    ll e = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if (e == 1 && o == 1)
    {
        cout << "Larpity\n";
    }
    else if (e == 0 && o == 3)
    {
        cout << "Larpity\n";
    }
    else
    {
        cout << "Moggity\n";
    }
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