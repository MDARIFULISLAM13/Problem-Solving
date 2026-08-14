/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-13
 * Time : 15:45:55
 * Problem Name : C_Find_the_Zero
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
// #define endl "\n";
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
    ll x;
    for (int i = 1; i < n; i++)
    {
        cout << "? " << i * 2 + 1 << " " << i * 2 + 2 << endl;
       
        cin >> x;
        if (x == 1)
        {
            cout << "! " << i * 2 + 1 << endl;
            return;
        }
    }
    cout << "? " << 1 << " " << 3 << endl;
    cin >> x;
    if (x == 1)
    {
        cout << "! " << 1<< endl;
        return;
    }
    cout << "? " << 1 << " " << 4 << endl;
    cin >> x;
    if (x == 1)
    {
        cout << "! " << 1 << endl;
        return;
    }
    cout << "! " << 2 << endl;
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