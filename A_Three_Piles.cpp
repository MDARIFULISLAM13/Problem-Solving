/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-20
 * Time : 11:11:42
 * Problem Name : A_Three_Piles
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
    vec v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i];

    sort(v);
    v[0]++;
    v[2]--;
    for (int i = 1; i < 3; i++)
    {
        if (v[i] != v[i - 1])
        {
            no return;
        }
    }
    yes
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