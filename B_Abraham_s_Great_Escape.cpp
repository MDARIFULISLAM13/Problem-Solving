/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-10-06
 * Time : 00:27:58
 * Problem Name : B_Abraham_s_Great_Escape
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

void print(ll k, ll n)
{
    vector<vector<char>> grid(n + 1, vector<char>(n + 1, 'U'));

    for (ll j = 1; j <= n; j++)
    {
        if (k >= 2)
        {
            grid[n - 1][j] = 'D';
            k -= 2;
        }
    }
    for (ll i = n - 2; i >= 1; i--)
    {
        for (ll j = 1; j <= n; j++)
        {
            if (k > 0)
            {
                grid[i][j] = 'D';
                k--;
            }
        }
    }

    cout << "YES" << endl;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
            cout << grid[i][j];
        cout << endl;
    }
}
void solve()
{
    ll n, k;
    cin >> n >> k;

    if (k == 1 && n == 2)
    {
        cout << "YES" << endl;
        cout << "DU" << endl;
        cout << "UL" << endl;
        return;
    }

    k = (n * n) - k;

    if (k == 1)
    {
        cout << "NO" << endl;
        return;
    }

    print(k, n);
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