/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-03-31
 * Time : 22:39:12
 * Problem Name : B_Flipping_Binary_String
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

    ll cnt = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == '1')
            ++cnt;

    if (cnt == 1)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        cout << cnt << endl;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                cout << i + 1 << " ";
        }
        cout << endl;
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