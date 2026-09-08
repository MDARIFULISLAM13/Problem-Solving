/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-07
 * Time : 20:36:29
 * Problem Name : Bit_Eater
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

    ll m;
    cin >> m;
    m = pow(2, m);

    for (int i = 0; i < n; i++)
        cout << v[i] / m << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}