/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-04
 * Time : 20:48:30
 * Problem Name : C_The_67_th_Permutation_Problem
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
    n *= 3;
    ll l = 1, h = n;

    while (n != 0)
    {
        cout << l << " " << h << " " << h - 1 << " ";
        l += 1;
        h-=2;
        n -= 3;
    }
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