/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-28
 * Time : 20:40:25
 * Problem Name : A_Maximum_Neighborhood
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

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else if (n == 2)
    {
        cout << 9 << endl;
        return;
    }

    ll sum1 = 4 * n * n - n - 4;

    ll sum2 = 5 * n * n - 5 * n - 5;

    cout << max(sum1, sum2) << endl;
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