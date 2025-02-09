/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-02-2025
 * time : 00:19:11
 * Problem Name : B_Random_Teams
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
#define mem(dp,i) memset(dp,i,sizeof(dp));

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll mx = n - m;
    ll k_max = (mx * (mx + 1)) / 2;
    ll mn = n / m;
    ll x = (n % m);
    ll total_mn = (mn * (mn + 1)) / 2;
    total_mn *= x;
    m -= x;
    ll K_mn = ((mn - 1) * mn) / 2;
    K_mn *= m;
    K_mn += total_mn;


    cout << K_mn << " " << k_max;

    return 0;
}