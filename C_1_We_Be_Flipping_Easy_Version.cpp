/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-23
 * Time : 20:59:17
 * Problem Name : C_1_We_Be_Flipping_Easy_Version
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

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    ll cnt = 0;
    vec a;

    for (int i = n; i > 0; i--)
    {
        if (cnt % 2 != 0)
        {
            v[i] *= (-1);
        }
        if (v[i] > 0)
        {
            ++cnt;
            a.push_back(i);
        }
    }

    cout << cnt << endl;
    for (auto i : a)
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