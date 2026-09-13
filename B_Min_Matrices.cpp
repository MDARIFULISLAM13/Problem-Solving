/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-12
 * Time : 20:51:46
 * Problem Name : B_Min_Matrices
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
    ll n, k;
    cin >> n >> k;
    if (k < n || k > (n + (n - 1)))
    {
        cout << -1 << endl;
        return;
    }

    ll x = n * n;
    ll a[n + 1][n + 1] = {0};

    ll b = k - (n - 1);
    ll cnt = 1;
    for (int i = 1; i <= b; i++)
    {
        a[1][i] = cnt;
        ++cnt;
    }

    for (int i = 2; i <= n; i++)
    {
        a[i][i] = cnt;
        ++cnt;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 0)
            {
                cout << cnt << " ";
                ++cnt;
            }
            else
            {
                cout << a[i][j] << " ";
            }
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