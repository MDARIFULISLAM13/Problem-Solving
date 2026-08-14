/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-10
 * Time : 22:34:13
 * Problem Name : A_Three_Numbers_on_the_Blackboard
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
    vec v(4);
    for (int i = 0; i <= 2; i++)
        cin >> v[i];

    sort(v);
    v[0] = v[1] + v[2];
    sort(v);
    cout << v[2] - v[0] << endl;
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