/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-05
 * Time : 21:00:47
 * Problem Name : C_101
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
    vec v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            break;
        }
        else if (v[i] == -1)
        {
            v[i] = 1;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 1)
        {
            break;
        }
        else if (v[i] == -1)
        {
            v[i] = 1;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == -1)
            v[i] = 0;
    }

    for (int i : v)
        cout << i << " ";

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