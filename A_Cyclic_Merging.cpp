/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-15
 * Time : 00:47:35
 * Problem Name : A_Cyclic_Merging
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
    vec v(n + 1);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll sum = 0;
    v[n] = v[0];

    for (int i = 0; i < n; i++)
    {
        sum += max(v[i], v[i + 1]);
    }
    sum -= *max_element(v.begin(), v.end());

    cout << sum << endl;
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